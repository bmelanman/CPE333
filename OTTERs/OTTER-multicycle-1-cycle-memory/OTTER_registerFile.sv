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


module OTTER_registerFile (
    input               clock,      // the clock to trigger write
    input        [ 4:0] Read1,      //the registers to read from
    input        [ 4:0] Read2,
    input               RegWrite,   //the write control
    input        [ 4:0] WriteReg,   //the register number write to
    input        [31:0] WriteData,  //data to write
    output logic [31:0] Data1,      // the register values read
    output logic [31:0] Data2
);
    //32 registers each 32 bits long
    logic [31:0] RF[32] = '{default: 0};

    assign Data1 = RF[Read1];
    assign Data2 = RF[Read2];

    always @(posedge clock) begin  // write the register with the new value if Regwrite is high
        if (RegWrite && WriteReg != 0) RF[WriteReg] <= WriteData;
    end
endmodule

