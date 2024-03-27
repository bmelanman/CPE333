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

module Mult4to1 (
    input [31:0] In1,
    input [31:0] In2,
    input [31:0] In3,
    input [31:0] In4,
    input [1:0] Sel,
    output logic [31:0] Out
);
    always_comb
        case (Sel)
            0:       Out = In1;
            1:       Out = In2;
            2:       Out = In3;
            default: Out = In4;
        endcase
endmodule
