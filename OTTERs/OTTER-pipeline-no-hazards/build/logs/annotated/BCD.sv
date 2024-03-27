//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company:
        // Engineer:
        //
        // Create Date: 06/29/2018 12:37:05 AM
        // Design Name:
        // Module Name: BCD
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
        
        
        module BCD (
%000000     input [15:0] HEX,
%000000     output logic [3:0] THOUSANDS,
%000000     output logic [3:0] HUNDREDS,
%000000     output logic [3:0] TENS,
%000000     output logic [3:0] ONES
        );
        
            int i;
        
%000001     always_comb begin
%000001         THOUSANDS = 4'h0;
%000001         HUNDREDS = 4'h0;
%000001         TENS = 4'h0;
%000001         ONES = 4'h0;
        
%000001         for (i = 15; i >= 0; i = i - 1) begin
 037516             if (THOUSANDS >= 5) THOUSANDS = THOUSANDS + 3;
 037516             if (HUNDREDS >= 5) HUNDREDS = HUNDREDS + 3;
 037516             if (TENS >= 5) TENS = TENS + 3;
 037516             if (ONES >= 5) ONES = ONES + 3;
        
 000016             THOUSANDS = {THOUSANDS[2:0], HUNDREDS[3]};
 000016             HUNDREDS = {HUNDREDS[2:0], TENS[3]};
 000016             TENS = {TENS[2:0], ONES[3]};
 000016             ONES = {ONES[2:0], HEX[i]};
                end
            end
        
        endmodule
        
