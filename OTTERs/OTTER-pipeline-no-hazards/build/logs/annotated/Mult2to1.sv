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
        
        module Mult2to1 (
%000000     input [31:0] in0,
%000000     input [31:0] in1,
%000000     input sel,
%000000     output logic [31:0] out
        );
%000001     always_comb
%000001         case (sel)
 002501             0:       out = in0;
%000000             default: out = in1;
                endcase
        endmodule
        
