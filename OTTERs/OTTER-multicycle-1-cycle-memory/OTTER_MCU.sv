`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:  J. Callenes
//
// Create Date: 01/04/2019 04:32:12 PM
// Design Name:
// Module Name: OTTER_CPU
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module OTTER_MCU (
    input CLK,
    input INTR,
    input RESET,
    input [31:0] IOBUS_IN,
    output [31:0] IOBUS_OUT,
    output [31:0] IOBUS_ADDR,
    output logic IOBUS_WR
);
    logic [6:0] opcode;
    logic [31:0]
        pc,
        pc_value,
        next_pc,
        jalr_pc,
        branch_pc,
        jump_pc,
        int_pc,
        A,
        B,
        I_immed,
        S_immed,
        U_immed,
        aluBin,
        aluAin,
        aluResult,
        rfIn,
        csr_reg,
        mem_data;

    logic [31:0] IR;
    logic memRead1, memRead2;

    logic pcWrite, regWrite, memWrite, op1_sel, mem_op, IorD, pcWriteCond, memRead;
    logic [1:0] opB_sel, rf_sel, wb_sel, mSize;
    logic [2:0] pc_sel;
    logic [3:0] alu_fun;
    logic opA_sel;

    logic mepcWrite, csrWrite, intCLR, mie, intTaken;
    logic [31:0] mepc, mtvec;


    assign opcode = IR[6:0];  // opcode shortcut
    //PC is byte-addressed but our memory is word addressed
    ProgCount PC (
        .PC_CLK(CLK),
        .PC_RST(RESET),
        .PC_LD(pcWrite),
        .PC_DIN(pc_value),
        .PC_COUNT(pc)
    );

    // Creates a 2-to-1 multiplexor used to select the source of the next PC
    Mult6to1 PCdatasrc (
        .In1(next_pc),
        .In2(jalr_pc),
        .In3(branch_pc),
        .In4(jump_pc),
        .In5(mtvec),
        .In6(mepc),
        .Sel(pc_sel),
        .Out(pc_value)
    );
    // Creates a 4-to-1 multiplexor used to select the B input of the ALU
    Mult4to1 ALUBinput (
        .In1(B),
        .In2(I_immed),
        .In3(S_immed),
        .In4(pc),
        .Sel(opB_sel),
        .Out(aluBin)
    );

    Mult2to1 ALUAinput (
        .In1(A),
        .In2(U_immed),
        .Sel(opA_sel),
        .Out(aluAin)
    );
    // Creates a RISC-V ALU
    // Inputs are ALUCtl (the ALU control), ALU value inputs (ALUAin, ALUBin)
    // Outputs are ALUResultOut (the 64-bit output) and Zero (zero detection output)
    OTTER_ALU ALU (
        .ALU_fun(alu_fun),
        .A(aluAin),
        .B(aluBin),
        .ALUOut(aluResult)
    );  // the ALU

    // Creates a RISC-V register file
    OTTER_registerFile RF (
        .clock(CLK),
        .Read1(IR[19:15]),
        .Read2(IR[24:20]),
        .RegWrite(regWrite),
        .WriteReg(IR[11:7]),
        .WriteData(rfIn),
        .Data1(A),
        .Data2(B)
    );  // Register file

    //Creates 4-to-1 multiplexor used to select reg write back data
    Mult4to1 regWriteback (
        .In1(next_pc),
        .In2(csr_reg),
        .In3(mem_data),
        .In4(aluResult),
        .Sel(wb_sel),
        .Out(rfIn)
    );

    //pc target calculations
    assign next_pc = pc + 4;  //PC is byte aligned, memory is word aligned
    assign jalr_pc = I_immed + A;
    //assign branch_pc = pc + {{21{IR[31]}},IR[7],IR[30:25],IR[11:8] ,1'b0};   //word aligned addresses
    assign branch_pc = pc + {{20{IR[31]}}, IR[7], IR[30:25], IR[11:8], 1'b0};  //byte aligned addresses
    assign jump_pc = pc + {{12{IR[31]}}, IR[19:12], IR[20], IR[30:21], 1'b0};
    assign int_pc = 0;

    logic br_lt, br_eq, br_ltu;
    //Branch Condition Generator
    always_comb begin
        br_lt  = 0;
        br_eq  = 0;
        br_ltu = 0;
        if ($signed(A) < $signed(B)) br_lt = 1;
        if (A == B) br_eq = 1;
        if (A < B) br_ltu = 1;
    end

    // Generate immediates
    assign S_immed = {{20{IR[31]}}, IR[31:25], IR[11:7]};
    assign I_immed = {{20{IR[31]}}, IR[31:20]};
    assign U_immed = {IR[31:12], {12{1'b0}}};


    OTTER_mem_dualport memory (
        .MEM_CLK(CLK),
        .MEM_ADDR1(pc),
        .MEM_ADDR2(aluResult),
        .MEM_DIN2(B),
        .MEM_WRITE2(memWrite),
        .MEM_READ1(memRead1),
        .MEM_READ2(memRead2),
        .ERR(),
        .MEM_DOUT1(IR),
        .MEM_DOUT2(mem_data),
        .IO_IN(IOBUS_IN),
        .IO_WR(IOBUS_WR),
        .MEM_SIZE(IR[13:12]),
        .MEM_SIGN(IR[14])
    );

    OTTER_CU_Decoder CU_DECODER (
        .CU_OPCODE(opcode),
        .CU_FUNC3(IR[14:12]),
        .CU_FUNC7(IR[31:25]),
        .CU_BR_EQ(br_eq),
        .CU_BR_LT(br_lt),
        .CU_BR_LTU(br_ltu),
        .CU_PCSOURCE(pc_sel),
        .CU_ALU_SRCA(opA_sel),
        .CU_ALU_SRCB(opB_sel),
        .CU_ALU_FUN(alu_fun),
        .CU_RF_WR_SEL(wb_sel),
        .intTaken(intTaken)
    );

    logic prev_INT = 0;

    OTTER_CU_FSM CU_FSM (
        .CU_CLK(CLK),
        .CU_INT(INTR),
        .CU_RESET(RESET),
        .CU_OPCODE(opcode),  //.CU_OPCODE(opcode),
        .CU_FUNC3(IR[14:12]),
        .CU_FUNC12(IR[31:20]),
        .CU_PCWRITE(pcWrite),
        .CU_REGWRITE(regWrite),
        .CU_MEMWRITE(memWrite),
        .CU_MEMREAD1(memRead1),
        .CU_MEMREAD2(memRead2),
        .CU_intTaken(intTaken),
        .CU_intCLR(intCLR),
        .CU_csrWrite(csrWrite),
        .CU_prevINT(prev_INT)
    );

    //CSR registers and interrupt logic
    CSR CSRs (
        .clk(CLK),
        .rst(RESET),
        .intTaken(intTaken),
        .intRet(),
        .addr(IR[31:20]),
        .next_pc(pc),
        .wd(aluResult),
        .wr_en(csrWrite),
        .rd(csr_reg),
        .mepc(mepc),
        .mtvec(mtvec),
        .mie(mie),
        .mstatus()
    );

    always_ff @(posedge CLK) begin
        if (INTR && mie) prev_INT <= 1'b1;
        if (intCLR || RESET) prev_INT <= 1'b0;
    end
    //MMIO /////////////////////////////////////////////////////
    assign IOBUS_ADDR = aluResult;
    assign IOBUS_OUT  = B;


endmodule
