`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer: J. Callenes
//
// Create Date: 01/27/2019 09:22:55 AM
// Design Name:
// Module Name: CU_Decoder
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
//`include "opcodes.svh"

module OTTER_CU_Decoder (
    input  logic [6:0] OPCODE_RAW,
    input  logic [2:0] FUNC3,
    input  logic [6:0] FUNC7,
    output logic       ALU_SRC_A,
    output logic [1:0] ALU_SRC_B,
    output logic [3:0] ALU_FUN,
    output logic [1:0] RF_WR_SEL,
    output logic       RF_WR_EN,
    output logic       MEM_WRITE,
    output logic       MEM_READ2
);
    typedef enum logic [6:0] {
        LUI    = 7'b0110111,
        AUIPC  = 7'b0010111,
        JAL    = 7'b1101111,
        JALR   = 7'b1100111,
        BRANCH = 7'b1100011,
        LOAD   = 7'b0000011,
        STORE  = 7'b0100011,
        OP_IMM = 7'b0010011,
        OP     = 7'b0110011,
        SYSTEM = 7'b1110011
    } opcode_t;

    opcode_t OPCODE;
    assign OPCODE = opcode_t'(OPCODE_RAW);

    logic brn_cond;

    //DECODING  (does not depend on state)  ////////////////////////////////////////////

    // ALU function select
    always_comb begin
        case (OPCODE)
            OP:          ALU_FUN = {FUNC7[5], FUNC3};
            OP_IMM:      ALU_FUN = (FUNC3 == 3'b101) ? {FUNC7[5], FUNC3} : {1'b0, FUNC3};
            LUI, SYSTEM: ALU_FUN = 4'b1001;
            default:     ALU_FUN = 4'b0000;  // AUIPC, LOAD, STORE
        endcase
    end

    // Register file write select
    always_comb begin
        case (OPCODE)
            JAL, JALR: RF_WR_SEL = 0;  // PC + 4
            SYSTEM:    RF_WR_SEL = 1;  // Jump and link
            LOAD:      RF_WR_SEL = 2;  // Branch
            default:   RF_WR_SEL = 3;  // Jump
        endcase
    end

    // ALU src A select
    always_comb begin
        case (OPCODE)
            LUI, AUIPC: ALU_SRC_A = 1; // RS1
            default:    ALU_SRC_A = 0; // U-type Immd
        endcase
    end

    // ALU src B select
    always_comb begin
        case (OPCODE)
            default:           ALU_SRC_B = 0;  // RS2
            LOAD, JAL, OP_IMM: ALU_SRC_B = 1;  // I-type Immd
            STORE:             ALU_SRC_B = 2;  // S-type Immd
            AUIPC:             ALU_SRC_B = 3;  // PC
        endcase
    end

    // Memory and register R/W control
    always_comb begin
        case (OPCODE)
            LUI, AUIPC, JAL, JALR, OP, OP_IMM: begin
                RF_WR_EN  = 1;
                MEM_WRITE = 0;
                MEM_READ2 = 0;
            end
            LOAD: begin
                RF_WR_EN  = 1;
                MEM_WRITE = 0;
                MEM_READ2 = 1;
            end
            STORE: begin
                RF_WR_EN  = 0;
                MEM_WRITE = 1;
                MEM_READ2 = 0;
            end
            default: begin
                RF_WR_EN  = 0;
                MEM_WRITE = 0;
                MEM_READ2 = 0;
            end
        endcase
    end

endmodule
