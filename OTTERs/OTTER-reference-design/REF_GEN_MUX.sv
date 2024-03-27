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

module REF_GEN_MUX (  // 4-to-1 mux
    input  [31:0] in0,
    input  [31:0] in1,
    input  [31:0] in2,
    input  [31:0] in3,
    input  [ 3:0] sel,
    output [31:0] out
);
    MUX_4_TO_1 GM (
        .sel(sel),
        .in0(in0),
        .in1(in1),
        .in2(in2),
        .in3(in3),
        .out(out)
    );
endmodule

module Mult6to1 (
    input  [31:0] in0,
    input  [31:0] in1,
    input  [31:0] in2,
    input  [31:0] in3,
    input  [31:0] in4,
    input  [31:0] in5,
    input  [ 3:0] sel,
    output [31:0] out
);
    always_comb
        case (sel)
            5:       out = in5;
            4:       out = in4;
            3:       out = in3;
            2:       out = in2;
            1:       out = in1;
            default: out = in0;
        endcase
endmodule

module Mult5to1 (
    input  [31:0] in0,
    input  [31:0] in1,
    input  [31:0] in2,
    input  [31:0] in3,
    input  [31:0] in4,
    input  [ 3:0] sel,
    output [31:0] out
);
    always_comb
        case (sel)
            4:       out = in4;
            3:       out = in3;
            2:       out = in2;
            1:       out = in1;
            default: out = in0;
        endcase
endmodule

module Mult4to1 (
    input  [31:0] in0,
    input  [31:0] in1,
    input  [31:0] in2,
    input  [31:0] in3,
    input  [ 3:0] sel,
    output [31:0] out
);
    always_comb
        case (sel)
            0:       out = in0;
            1:       out = in1;
            2:       out = in2;
            default: out = in3;
        endcase
endmodule

module Mult2to1 (
    input  [31:0] in0,
    input  [31:0] in1,
    input  [ 3:0] sel,
    output [31:0] out
);
    always_comb
        case (sel)
            0:       out = in0;
            default: out = in1;
        endcase
endmodule
