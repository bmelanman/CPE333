`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////
// Engineer: Bryce Melander
// Company: Cal Poly
//
// Create Date: Nov-21-2023
// Module Name: OTTER_Branch_Cond_Addr_Gen
// Target Devices: OTTER MCU on Basys3
// Description: OTTER MCU branch address generator. Creates 3 signals that
//              conditionally change the program counter (PC).
//
// Dependencies:
//
// Revisions:
//  * 0.01 - File Created
//
// Copyright (c) 2023 by Bryce Melander under MIT License. All rights
// reserved, see http://opensource.org/licenses/MIT for more details.
//////////////////////////////////////////////////////////////////////////////

typedef enum logic [2:0] {
    Func3_PRIV   = 3'b000,  //mret
    Func3_CSRRW  = 3'b001,
    Func3_CSRRS  = 3'b010,
    Func3_CSRRC  = 3'b011,
    Func3_CSRRWI = 3'b101,
    Func3_CSRRSI = 3'b110,
    Func3_CSRRCI = 3'b111
} funct3_system_t;

typedef enum logic [6:0] {
    OP_LUI    = 7'b0110111,
    OP_AUIPC  = 7'b0010111,
    OP_JAL    = 7'b1101111,
    OP_JALR   = 7'b1100111,
    OP_BRANCH = 7'b1100011,
    OP_LOAD   = 7'b0000011,
    OP_STORE  = 7'b0100011,
    OP_OP_IMM = 7'b0010011,
    OP_OP     = 7'b0110011,
    OP_SYSTEM = 7'b1110011
} opcode_t;

module OTTER_Branch_Cond_Addr_Gen (
    input        [ 6:0] OPCODE_RAW,
    input        [ 2:0] FUNC3,
    input        [31:0] PC,
    input        [31:0] RS1,
    input        [31:0] RS2,
    input        [31:0] I_TYPE,
    input        [31:0] J_TYPE,
    input        [31:0] B_TYPE,
    input               INT_TAKEN,
    output logic [ 2:0] PC_SRC,
    output logic [31:0] JALR,
    output logic [31:0] BRANCH,
    output logic [31:0] JAL
);
    //region Branch Address Generator *****************************************/

    assign JALR   = (I_TYPE + RS1);
    assign BRANCH = (B_TYPE + PC);
    assign JAL    = (J_TYPE + PC);

    //endregion ***************************************************************/

    //region Branch Condition Generator ***************************************/

    logic br_eq, br_lt, br_ltu, br_cond;
    logic [2:0] func3_cond;

    assign br_eq  = (RS1 == RS2 ? 1 : 0);
    assign br_lt  = ($signed(RS1) < $signed(RS2) ? 1 : 0);
    assign br_ltu = (RS1 < RS2 ? 1 : 0);

    always_comb begin
        case (FUNC3)
            3'b000:  br_cond = br_eq;  //BEQ
            3'b100:  br_cond = br_lt;  //BLT
            3'b110:  br_cond = br_ltu;  //BLTU
            3'b001:  br_cond = ~br_eq;  //BNE
            3'b101:  br_cond = ~br_lt;  //BGE
            3'b111:  br_cond = ~br_ltu;  //BGEU
            default: br_cond = 0;
        endcase
    end

    assign func3_cond = (FUNC3 == Func3_PRIV) ? 3'b101 : 3'b000;  // mret

    always_comb begin
        if (INT_TAKEN) PC_SRC = 3'b100;  // Interrupt
        else begin
            case (opcode_t'(OPCODE_RAW))
                OP_JALR:   PC_SRC = 3'b001;  // Jump and Link Register
                OP_BRANCH: PC_SRC = (br_cond) ? 3'b010 : 3'b000;  // Branch
                OP_JAL:    PC_SRC = 3'b011;  // Jump
                OP_SYSTEM: PC_SRC = func3_cond;  // Privileged Instructions
                default:   PC_SRC = 3'b000;
            endcase
        end
    end

    //endregion ***************************************************************/

endmodule

// End of File //
