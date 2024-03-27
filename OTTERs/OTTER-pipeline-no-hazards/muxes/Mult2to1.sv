`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Engineer: J. Callenes, Bryce Melander
// Create Date: 03/05/2024
//
// Project: CPE 333 - OTTER
// Design:  Generic Multiplexers
// Module:  GEN_MUX
// Deps:    None
//
// Description: A collection of generic muxes, ranging from 2-to-1 to 6-to-1
//
//////////////////////////////////////////////////////////////////////////////////

module Mult2to1 (
    input [31:0] in0,
    input [31:0] in1,
    input sel,
    output logic [31:0] out
);
    always_comb
        case (sel)
            0:       out = in0;
            default: out = in1;
        endcase
endmodule
