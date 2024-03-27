`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer: J. Callenes
//
// Create Date: 06/07/2018 04:21:54 PM
// Design Name:
// Module Name: ProgCount
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


module OTTER_Prog_Count (
    input  logic        PC_CLK,
    input  logic        PC_RST,
    input  logic        PC_LD,
    input  logic [31:0] PC_DIN,
    output logic [31:0] PC_CNT = 0
);
    always_ff @(posedge PC_CLK) begin
        if (PC_RST == 1'b1) PC_CNT <= '0;  // Reset counter
        else if (PC_LD == 1'b1) PC_CNT <= PC_DIN;  // Load new value
        else PC_CNT <= PC_CNT;  // Prevent latching
    end
endmodule
