//      // verilator_coverage annotation
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
%000004     input  logic [6:0] OPCODE_RAW,
%000000     input  logic [2:0] FUNC3,
%000002     input  logic [6:0] FUNC7,
%000000     output logic       ALU_SRC_A,
%000000     output logic [1:0] ALU_SRC_B,
%000002     output logic [3:0] ALU_FUN,
%000001     output logic [1:0] RF_WR_SEL,
 000010     output logic       RF_WR_EN,
%000000     output logic       MEM_WRITE,
%000000     output logic       MEM_READ2
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
        
%000004     opcode_t OPCODE;
            assign OPCODE = opcode_t'(OPCODE_RAW);
        
%000000     logic brn_cond;
        
            //DECODING  (does not depend on state)  ////////////////////////////////////////////
        
            // ALU function select
%000001     always_comb begin
%000001         case (OPCODE)
%000004             OP:          ALU_FUN = {FUNC7[5], FUNC3};
%000006             OP_IMM:      ALU_FUN = (FUNC3 == 3'b101) ? {FUNC7[5], FUNC3} : {1'b0, FUNC3};
%000000             LUI, SYSTEM: ALU_FUN = 4'b1001;
 002491             default:     ALU_FUN = 4'b0000;  // AUIPC, LOAD, STORE
                endcase
            end
        
            // Register file write select
%000000     always_comb begin
%000000         case (OPCODE)
%000000             JAL, JALR: RF_WR_SEL = 0;  // PC + 4
%000000             SYSTEM:    RF_WR_SEL = 1;  // Jump and link
%000000             LOAD:      RF_WR_SEL = 2;  // Branch
%000000             default:   RF_WR_SEL = 3;  // Jump
                endcase
            end
        
            // ALU src A select
%000001     always_comb begin
%000001         case (OPCODE)
%000000             LUI, AUIPC: ALU_SRC_A = 1; // RS1
 002501             default:    ALU_SRC_A = 0; // U-type Immd
                endcase
            end
        
            // ALU src B select
%000000     always_comb begin
%000000         case (OPCODE)
%000000             default:           ALU_SRC_B = 0;  // RS2
%000000             LOAD, JAL, OP_IMM: ALU_SRC_B = 1;  // I-type Immd
%000000             STORE:             ALU_SRC_B = 2;  // S-type Immd
%000000             AUIPC:             ALU_SRC_B = 3;  // PC
                endcase
            end
        
            // Memory and register R/W control
%000000     always_comb begin
%000000         case (OPCODE)
%000000             LUI, AUIPC, JAL, JALR, OP, OP_IMM: begin
%000000                 RF_WR_EN  = 1;
%000000                 MEM_WRITE = 0;
%000000                 MEM_READ2 = 0;
                    end
%000000             LOAD: begin
%000000                 RF_WR_EN  = 1;
%000000                 MEM_WRITE = 0;
%000000                 MEM_READ2 = 1;
                    end
%000000             STORE: begin
%000000                 RF_WR_EN  = 0;
%000000                 MEM_WRITE = 1;
%000000                 MEM_READ2 = 0;
                    end
%000000             default: begin
%000000                 RF_WR_EN  = 0;
%000000                 MEM_WRITE = 0;
%000000                 MEM_READ2 = 0;
                    end
                endcase
            end
        
        endmodule
        
