`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:  J. Callenes
//
// Create Date: 01/05/2019 12:17:57 AM
// Design Name:
// Module Name: registerFile
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

module OTTER_REF_Reg_File (
    input CLK,
    input WR_EN,
    input [4:0] WR_ADDR,
    input [31:0] WR_DATA,
    input [31:0] RD_ADDR1,
    input [31:0] RD_ADDR2,
    output logic [31:0] RS1,
    output logic [31:0] RS2
);
    // 32 registers with a width of 32 bits, all initialized to 32'b0
    reg [31:0] registers[31] = '{default: '0};

    // Async. read from registers
    assign RS1 = registers[RD_ADDR1];
    assign RS2 = registers[RD_ADDR2];

    // Sync. write to registers (don't write to x0)
    always_ff @(posedge CLK) begin
        if (WR_EN && WR_ADDR != 5'b0) registers[WR_ADDR] <= WR_DATA;
    end
endmodule

