`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////
// Engineer: Bryce Melander
//
// Module Name: OTTER_REF_Branch_Addr_Gen
// Target Devices: Basys3
// Description: OTTER MCU branch address generator. Creates 3 signals that
//              conditionally change the program counter (PC).
//
//////////////////////////////////////////////////////////////////////////////

module OTTER_REF_Branch_Addr_Gen (
    input [31:0] PC,
    input [31:0] RS1,
    input [31:0] I_TYPE,
    input [31:0] J_TYPE,
    input [31:0] B_TYPE,
    output logic [31:0] JALR,
    output logic [31:0] BRANCH,
    output logic [31:0] JAL
);

    assign JALR = (I_TYPE + RS1);
    assign BRANCH = (B_TYPE + PC);
    assign JAL = (J_TYPE + PC);

endmodule

// End of File //
