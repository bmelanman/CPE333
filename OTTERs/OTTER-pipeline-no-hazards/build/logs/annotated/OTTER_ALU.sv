//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company:
        // Engineer: J. Callenes
        //
        // Create Date: 06/07/2018 05:03:50 PM
        // Design Name:
        // Module Name: ArithLogicUnit
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
        
        module OTTER_ALU (
%000000     input  logic [31:0] ALU_SRC_A,
%000000     input  logic [31:0] ALU_SRC_B,
%000002     input  logic [ 3:0] ALU_FUN,    // {func7[5], func3[2:0]}
%000000     output logic [31:0] ALU_OUT
        );
        
%000000     logic [31:0] ALU_SIN_A, ALU_SIN_B;
        
            assign ALU_SIN_A = $signed(ALU_SRC_A);
            assign ALU_SIN_B = $signed(ALU_SRC_B);
        
%000001     always_comb begin
%000001         case (ALU_FUN)
 002498             4'b0000: ALU_OUT = ALU_SRC_A + ALU_SRC_B;  // add (func 0)
%000001             4'b1000: ALU_OUT = ALU_SRC_A - ALU_SRC_B;  // sub (func 8)
%000000             4'b1010: ALU_OUT = ALU_SRC_A * ALU_SRC_B;  // mul (func 10)
        
%000000             4'b0110: ALU_OUT = ALU_SRC_A | ALU_SRC_B;  // or  (func 6)
%000000             4'b0111: ALU_OUT = ALU_SRC_A & ALU_SRC_B;  // and (func 7)
%000000             4'b0100: ALU_OUT = ALU_SRC_A ^ ALU_SRC_B;  // xor (func 4)
        
%000000             4'b0101: ALU_OUT = ALU_SRC_A >> ALU_SRC_B[4:0];  // srl (func 5)
%000001             4'b0001: ALU_OUT = ALU_SRC_A << ALU_SRC_B[4:0];  // sll (func 1)
%000000             4'b1101: ALU_OUT = ALU_SIN_A >>> ALU_SRC_B[4:0];  // sra (func 5)
        
%000001             4'b0010: ALU_OUT = (ALU_SIN_A < ALU_SIN_B) ? 1 : 0;  // slt  (func 2)
%000000             4'b0011: ALU_OUT = (ALU_SRC_A < ALU_SRC_B) ? 1 : 0;  // sltu (func 3)
        
%000000             4'b1001: ALU_OUT = ALU_SRC_A;  // lui (func 9)
        
%000000             default: ALU_OUT = 0;
                endcase
            end
        endmodule
        
