//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company:
        // Engineer: J. Callenes
        //
        // Create Date: 06/07/2018 04:21:54 PM
        // Design Name:
        // Module Name: ProgCount
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
        
        
        module OTTER_Prog_Count (
 004999     input  logic        PC_CLK,
%000000     input  logic        PC_RST,
%000001     input  logic        PC_LD,
 000020     input  logic [31:0] PC_DIN,
%000001     output logic [31:0] PC_CNT = 0
        );
 002500     always_ff @(posedge PC_CLK) begin
%000000         if (PC_RST == 1'b1) PC_CNT <= '0;  // Reset counter
%000000         else if (PC_LD == 1'b1) PC_CNT <= PC_DIN;  // Load new value
%000000         else PC_CNT <= PC_CNT;  // Prevent latching
            end
        endmodule
        
