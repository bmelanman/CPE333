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

module OTTER_REF_Arith_Logic_Unit (
    input  logic [ 3:0] ALU_FUN,  // {func7[5], func3[2:0]}
    input  logic [31:0] SRC_A,
    input  logic [31:0] SRC_B,
    output logic [31:0] ALU_OUT
);

    logic [31:0] SIN_A, SIN_B;

    assign SIN_A = $signed(SRC_A);
    assign SIN_B = $signed(SRC_B);

    always_comb begin
        case (ALU_FUN)
            4'b0000: ALU_OUT = SRC_A + SRC_B;  // add (func 0)
            4'b1000: ALU_OUT = SRC_A - SRC_B;  // sub (func 8)
            4'b1010: ALU_OUT = SRC_A * SRC_B;  // mul (func 10)

            4'b0110: ALU_OUT = SRC_A | SRC_B;  // or  (func 6)
            4'b0111: ALU_OUT = SRC_A & SRC_B;  // and (func 7)
            4'b0100: ALU_OUT = SRC_A ^ SRC_B;  // xor (func 4)

            4'b0101: ALU_OUT = SRC_A >> SRC_B[4:0];  // srl (func 5)
            4'b0001: ALU_OUT = SRC_A << SRC_B[4:0];  // sll (func 1)
            4'b1101: ALU_OUT = SIN_A >>> SRC_B[4:0];  // sra (func 5)

            4'b0010: ALU_OUT = (SIN_A < SIN_B) ? 1 : 0;  // slt  (func 2)
            4'b0011: ALU_OUT = (SRC_A < SRC_B) ? 1 : 0;  // sltu (func 3)

            4'b1001: ALU_OUT = SRC_A;  // lui (func 9)

            default: ALU_OUT = 0;
        endcase
    end
endmodule
