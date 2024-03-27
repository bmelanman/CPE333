`timescale 1ns / 1ps

typedef struct packed {
    logic [31:0] ir;
    logic [6:0]  opcode;
    logic [2:0]  func3;
    logic [6:0]  func7;
    logic [4:0]  rs1_addr;
    logic [4:0]  rs2_addr;
    logic [4:0]  rd_addr;
    logic [3:0]  alu_fun;
    logic [31:0] rs1;
    logic [31:0] rs2;
    logic [31:0] rd;
    logic [31:0] alu_res;
    logic        mem_write;
    logic        mem_read2;
    logic [31:0] mem_dout2;
    logic        rf_wr_en;
    logic [1:0]  rf_wr_sel;
    logic [2:0]  mem_type;   // Sign (1 bit), Size (2 bits)
    logic [31:0] pc;
    logic [31:0] I_immd;
    logic [31:0] J_immd;
    logic [31:0] B_immd;
    logic [31:0] S_immd;
    logic [31:0] U_immd;
} pipeline_t;

module OTTER_MCU_pipeline_no_hazards (
    input CLK,
    input INTR,
    input RESET,
    input [31:0] IOBUS_IN,
    output [31:0] IOBUS_OUT,
    output [31:0] IOBUS_ADDR,
    output logic IOBUS_WR
);

    //region Control Signals **************************************************/

    // Program counter
    logic pc_write;
    logic [2:0] pc_sel;
    logic [31:0] pc_in, pc_out, next_pc;

    // Register file
    logic [31:0] jalr_pc, branch_pc, jal_pc, int_pc, mepc_pc;

    // Memory
    logic mem_sign, mem_read1;
    logic [1:0] mem_size;
    logic [31:0] ir;

    // Write back
    logic [31:0] reg_wb_data;

    // Pipeline registers
    pipeline_t pipe_if_de;  // Instruction Fetch to Instruction Decode
    pipeline_t pipe_de_ex;  // Instruction Decode to Execute
    pipeline_t pipe_ex_mem;  // Execute to Memory
    pipeline_t pipe_mem_wb;  // Memory to Write Back

    // Misc.
    logic ERR_FLAG;

    always_comb begin
        if (ERR_FLAG) $display("Error flag is HIGH!");
    end

    //endregion ***************************************************************/

    //region Instruction Fetch ************************************************/

    assign pc_write = 1'b1;  // Assumes no hazards (hardwired high)
    assign mem_read1 = 1'b1;  // Fetch a new instruction every cycle

    assign int_pc = 32'b0;  // Interrupt address
    assign mepc_pc = 32'b0;  // Exception address

    assign next_pc = (pc_out + 4);  // PC + 4

    // PC Mux
    Mult6to1 PC_MUX (
        .in0(next_pc),    // PC + 4
        .in1(jalr_pc),    // Jump and link
        .in2(branch_pc),  // Branch
        .in3(jal_pc),     // Jump
        .in4(int_pc),     // Interrupt
        .in5(mepc_pc),    // Exception
        .sel(pc_sel),
        .out(pc_in)
    );

    // Program counter
    OTTER_Prog_Count PC (
        .PC_CLK(CLK),
        .PC_RST(RESET),
        .PC_LD (pc_write),
        .PC_DIN(pc_in),
        .PC_CNT(pc_out)
    );

    // Pipeline from `Instruction Fetch` to `Instruction Decode`
    always_ff @(posedge CLK) begin
        pipe_if_de.ir <= ir;
        pipe_if_de.pc <= pc_out;

        pipe_if_de.opcode <= ir[6:0];
        pipe_if_de.func3 <= ir[14:12];
        pipe_if_de.func7 <= ir[31:25];

        pipe_if_de.rs1_addr <= ir[19:15];
        pipe_if_de.rs2_addr <= ir[24:20];
        pipe_if_de.rd_addr <= ir[11:7];
    end

    //endregion ***************************************************************/

    //region Instruction Decode ***********************************************/

    logic de_aluA_sel, de_rf_wr_en, de_mem_write, de_mem_read2;
    logic [1:0] de_aluB_sel, de_rf_wr_sel;
    logic [3:0] de_alu_fun;
    logic [31:0] de_rs1, de_rs2, de_alu_rs1, de_alu_rs2;
    logic [31:0] de_U_immd, de_I_immd, de_S_immd, de_B_immd, de_J_immd;

    // Register file
    OTTER_Reg_File reg_file (
        .CLK(CLK),

        .WR_EN  (pipe_mem_wb.rf_wr_en),  // Writeback Signals
        .WR_ADDR(pipe_mem_wb.rd_addr),   //
        .WR_DATA(reg_wb_data),           //

        .ADDR1(pipe_if_de.rs1_addr),
        .ADDR2(pipe_if_de.rs2_addr),
        .RS1  (de_rs1),
        .RS2  (de_rs2)
    );

    // Decoder
    OTTER_CU_Decoder decoder (
        .OPCODE_RAW(pipe_if_de.opcode),
        .FUNC3(pipe_if_de.func3),
        .FUNC7(pipe_if_de.func7),

        .ALU_SRC_A(de_aluA_sel),
        .ALU_SRC_B(de_aluB_sel),
        .ALU_FUN  (de_alu_fun),

        .RF_WR_SEL(de_rf_wr_sel),

        .RF_WR_EN (de_rf_wr_en),
        .MEM_WRITE(de_mem_write),
        .MEM_READ2(de_mem_read2)
    );

    // Immediate generator
    OTTER_Immd_Gen immd_gen (
        .IR(pipe_if_de.ir),
        .U_TYPE(de_U_immd),
        .I_TYPE(de_I_immd),
        .S_TYPE(de_S_immd),
        .B_TYPE(de_B_immd),
        .J_TYPE(de_J_immd)
    );

    // ALU srcA Mux
    Mult2to1 ALU_SRC_A_MUX (
        .in0(de_rs1),
        .in1(pipe_de_ex.U_immd),
        .sel(de_aluA_sel),
        .out(de_alu_rs1)
    );

    // ALU srcB Mux
    Mult4to1 ALU_SRC_B_MUX (
        .in0(de_rs2),
        .in1(pipe_de_ex.I_immd),
        .in2(pipe_de_ex.S_immd),
        .in3(pipe_if_de.pc),
        .sel(de_aluB_sel),
        .out(de_alu_rs2)
    );

    // Pipeline from `Instruction Decode` to `Execute`
    always_ff @(posedge CLK) begin
        pipe_de_ex.pc        <= pipe_if_de.pc;
        pipe_de_ex.opcode    <= pipe_if_de.opcode;
        pipe_de_ex.func3     <= pipe_if_de.func3;

        pipe_de_ex.rf_wr_en  <= de_rf_wr_en;
        pipe_de_ex.rf_wr_sel <= de_rf_wr_sel;

        pipe_de_ex.rd_addr   <= pipe_if_de.rd_addr;

        pipe_de_ex.rs1       <= de_alu_rs1;
        pipe_de_ex.rs2       <= de_alu_rs2;
        pipe_de_ex.alu_fun   <= de_alu_fun;

        pipe_de_ex.I_immd    <= de_I_immd;
        pipe_de_ex.J_immd    <= de_J_immd;
        pipe_de_ex.B_immd    <= de_B_immd;
        pipe_de_ex.S_immd    <= de_S_immd;
        pipe_de_ex.U_immd    <= de_U_immd;

        pipe_de_ex.mem_write <= de_mem_write;
        pipe_de_ex.mem_read2 <= de_mem_read2;
    end

    //endregion ***************************************************************/

    //region Execute **********************************************************/

    logic [31:0] ex_alu_res;

    // ALU
    OTTER_ALU alu (
        .ALU_FUN  (pipe_de_ex.alu_fun),
        .ALU_SRC_A(pipe_de_ex.rs1),
        .ALU_SRC_B(pipe_de_ex.rs2),
        .ALU_OUT  (ex_alu_res)
    );

    // Branch Condition and Address Gen
    OTTER_Branch_Cond_Addr_Gen branch_cond_addr_gen (
        // Branch Condition I/O
        .OPCODE_RAW(pipe_de_ex.opcode),
        .FUNC3(pipe_de_ex.func3),
        .RS1(pipe_de_ex.rs1),
        .RS2(pipe_de_ex.rs2),
        .PC_SRC(pc_sel),
        .INT_TAKEN(INTR),
        // Branch Address I/O
        .PC(pipe_de_ex.pc),
        .I_TYPE(pipe_de_ex.I_immd),
        .J_TYPE(pipe_de_ex.J_immd),
        .B_TYPE(pipe_de_ex.B_immd),
        .JALR(jalr_pc),
        .BRANCH(branch_pc),
        .JAL(jal_pc)
    );

    // Pipeline from `Execute` to `Memory`
    always_ff @(posedge CLK) begin
        pipe_ex_mem.pc        <= pipe_de_ex.pc;

        pipe_ex_mem.rf_wr_en  <= pipe_de_ex.rf_wr_en;
        pipe_ex_mem.rf_wr_sel <= pipe_de_ex.rf_wr_sel;

        pipe_ex_mem.rd_addr   <= pipe_de_ex.rd_addr;

        pipe_ex_mem.rs2       <= pipe_de_ex.rs2;
        pipe_ex_mem.alu_res   <= ex_alu_res;

        pipe_ex_mem.mem_write <= pipe_de_ex.mem_write;
        pipe_ex_mem.mem_read2 <= pipe_de_ex.mem_read2;
    end

    //endregion ***************************************************************/

    //region Memory ***********************************************************/

    logic [31:0] m_mem_dout2;

    assign IOBUS_ADDR = pipe_ex_mem.alu_res;
    assign IOBUS_OUT  = pipe_ex_mem.rs2;

    // Instruction memory
    OTTER_MEM_dualport_singlecycle_pipeline mem_singlecycle_dualport (
        .MEM_CLK (CLK),
        .MEM_SIGN(mem_sign),
        .MEM_SIZE(mem_size),

        // Port 1
        .MEM_READ1(mem_read1),
        .MEM_ADDR1(pc_out),
        .MEM_DOUT1(ir),

        // Port 2
        .MEM_READ2 (pipe_ex_mem.mem_read2),
        .MEM_WRITE2(pipe_ex_mem.mem_write),
        .MEM_ADDR2 (pipe_ex_mem.alu_res),
        .MEM_DIN2  (pipe_ex_mem.rs2),
        .MEM_DOUT2 (m_mem_dout2),

        // IO bus
        .IO_IN(IOBUS_IN),
        .IO_WR(IOBUS_WR),
        .ERR  (ERR_FLAG)
    );

    // Pipeline from `Memory` to `Write Back`
    always_ff @(posedge CLK) begin
        pipe_mem_wb.pc        <= pipe_ex_mem.pc;

        pipe_mem_wb.rf_wr_en  <= pipe_ex_mem.rf_wr_en;
        pipe_mem_wb.rf_wr_sel <= pipe_ex_mem.rf_wr_sel;

        pipe_mem_wb.rd_addr   <= pipe_ex_mem.rd_addr;

        pipe_mem_wb.alu_res   <= pipe_ex_mem.alu_res;

        pipe_mem_wb.mem_dout2 <= m_mem_dout2;
    end

    //endregion ***************************************************************/

    //region Write Back ***********************************************************/

    logic [31:0] wb_next_pc;

    assign wb_next_pc = (pipe_mem_wb.pc + 4);

    // Register file WB Mux
    Mult4to1 RF_WB_MUX (
        .in0(wb_next_pc),             // PC + 4
        .in1(int_pc),                 // Interrupt address
        .in2(pipe_mem_wb.mem_dout2),  // Memory read data
        .in3(pipe_mem_wb.alu_res),    // ALU result
        .sel(pipe_mem_wb.rf_wr_sel),
        .out(reg_wb_data)
    );

    // Writeback Signals:
    //  - pipe_mem_wb.rf_wr_en
    //  - pipe_mem_wb.rd_addr

    //endregion ***************************************************************/

endmodule
