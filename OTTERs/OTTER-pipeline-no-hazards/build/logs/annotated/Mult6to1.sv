//      // verilator_coverage annotation
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
        
        module Mult6to1 (
 000020     input [31:0] in0,
%000002     input [31:0] in1,
 000020     input [31:0] in2,
%000002     input [31:0] in3,
%000000     input [31:0] in4,
%000000     input [31:0] in5,
%000000     input [2:0] sel,
 000020     output logic [31:0] out
        );
%000001     always_comb
%000001         case (sel)
%000000             5:       out = in5;
%000000             4:       out = in4;
%000000             3:       out = in3;
%000001             2:       out = in2;
%000000             1:       out = in1;
 002500             default: out = in0;
                endcase
        endmodule
        
