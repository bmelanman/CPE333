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

module Mult5to1 (
    input [31:0] In1,
    input [31:0] In2,
    input [31:0] In3,
    input [31:0] In4,
    input [31:0] In5,
    input [2:0] Sel,
    output logic [31:0] Out
);
    always_comb
        case (Sel)
            4:       Out = In5;
            3:       Out = In4;
            2:       Out = In3;
            1:       Out = In2;
            default: Out = In1;
        endcase
endmodule
