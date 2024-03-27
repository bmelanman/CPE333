`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////
// Engineer: Bryce Melander
//
// Module Name: OTTER_REF_Branch_Cond_Gen
// Target Devices: Basys3
// Description: OTTER MCU branch condition generator. Creates 3 signals that
//              are the result of 3 comparisons of 2 input values.
//
//////////////////////////////////////////////////////////////////////////////

module OTTER_REF_Branch_Cond_Gen (
    input [31:0] RS1,
    input [31:0] RS2,
    output logic BR_EQ,
    output logic BR_LT,
    output logic BR_LTU
);

    assign BR_EQ  = (RS1 == RS2 ? 1 : 0);
    assign BR_LT  = ($signed(RS1) < $signed(RS2) ? 1 : 0);
    assign BR_LTU = (RS1 < RS2 ? 1 : 0);

endmodule

// End of File //
