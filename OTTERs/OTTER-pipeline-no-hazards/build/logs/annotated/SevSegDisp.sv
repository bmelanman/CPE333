//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company:
        // Engineer:
        //
        // Create Date: 06/29/2018 12:58:25 AM
        // Design Name:
        // Module Name: SevSegDisp
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
        
        
        module SevSegDisp (
 010000     input CLK,
%000000     input MODE,
%000000     input [15:0] DATA_IN,
%000000     output [7:0] CATHODES,
%000000     output [3:0] ANODES
        );
        
%000000     logic [15:0] BCD_Val;
%000000     logic [15:0] Hex_Val;
        
            BCD BCDMod (
                .HEX(DATA_IN),
                .THOUSANDS(BCD_Val[15:12]),
                .HUNDREDS(BCD_Val[11:8]),
                .TENS(BCD_Val[7:4]),
                .ONES(BCD_Val[3:0])
            );
        
            CathodeDriver CathMod (
                .HEX(Hex_Val),
                .CLK(CLK),
                .CATHODES(CATHODES),
                .ANODES(ANODES)
            );
        
            // MUX to switch between HEX and BCD input
%000001     always_comb begin
%000000         if (MODE == 1'b1) Hex_Val = BCD_Val;
%000001         else Hex_Val = DATA_IN;
            end
        
        
        endmodule
        
