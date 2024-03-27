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
        
        module Mult4to1 (
 000020     input [31:0] in0,
 000114     input [31:0] in1,
%000002     input [31:0] in2,
 000020     input [31:0] in3,
%000001     input [1:0] sel,
%000000     output logic [31:0] out
        );
%000002     always_comb
%000002         case (sel)
 002498             0:       out = in0;
%000006             1:       out = in1;
%000000             2:       out = in2;
 002498             default: out = in3;
                endcase
        endmodule
        
