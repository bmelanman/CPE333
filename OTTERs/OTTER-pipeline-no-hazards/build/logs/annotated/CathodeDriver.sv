//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company: Cal Poly
        // Engineer: Paul Hummel
        //
        // Create Date: 06/28/2018 11:50:35 PM
        // Design Name:
        // Module Name: CathodeDriver
        // Target Devices: Basys3 and RAT MCU
        // Description:
        //              CATHODES = {dp,a,b,c,d,e,f,g}
        //              ANODES = {d4, d3, d2, d1}
        //
        // Revision:
        // Revision 0.01 - File Created
        //////////////////////////////////////////////////////////////////////////////////
        
        
        module CathodeDriver (
 010000     input CLK,
%000000     input [15:0] HEX,
%000000     output logic [7:0] CATHODES,
%000000     output logic [3:0] ANODES
        );
        
%000001     logic        s_clk_500 = 1'b0;  // 250Hz refresh clock
%000001     logic [ 1:0] r_disp_digit = 2'b00;  // current digit being displayed
%000001     logic [19:0] clk_div_counter = 20'h00000;
        
            // Clock Divider to create 500 Hz refresh from 100 MHz clock
 004999     always_ff @(posedge CLK) begin
 004999         clk_div_counter <= clk_div_counter + 1;
%000000         if (clk_div_counter == 20'h186A0) begin  // x186A0 = 1*10^5 = 1 ms toggle (x30D40)
%000000             clk_div_counter <= 20'h00000;
%000000             s_clk_500       <= ~s_clk_500;  // toggle every 1 ms creates 500 Hz clock
                end
            end
        
            // Refresh Seven Segment Display every 240 Hz
%000000     always_ff @(posedge s_clk_500) begin
%000000         case (r_disp_digit)
%000000             2'b00: begin
        
%000000                 ANODES <= 4'b1110;
        
%000000                 case (HEX[3:0])
%000000                     4'b0000: CATHODES <= 8'b10000001;  //0
%000000                     4'b0001: CATHODES <= 8'b11001111;  //1
%000000                     4'b0010: CATHODES <= 8'b10010010;  //2
%000000                     4'b0011: CATHODES <= 8'b10000110;  //3
%000000                     4'b0100: CATHODES <= 8'b11001100;  //4
%000000                     4'b0101: CATHODES <= 8'b10100100;  //5
%000000                     4'b0110: CATHODES <= 8'b10100000;  //6
%000000                     4'b0111: CATHODES <= 8'b10001111;  //7
%000000                     4'b1000: CATHODES <= 8'b10000000;  //8
%000000                     4'b1001: CATHODES <= 8'b10001100;  //9
%000000                     4'b1010: CATHODES <= 8'b10001000;  //a
%000000                     4'b1011: CATHODES <= 8'b11100000;  //b
%000000                     4'b1100: CATHODES <= 8'b10110001;  //c
%000000                     4'b1101: CATHODES <= 8'b11000010;  //d
%000000                     4'b1110: CATHODES <= 8'b10110000;  //e
%000000                     4'b1111: CATHODES <= 8'b10111000;  //f
%000000                     default: CATHODES <= 8'b11111111;  // failsafe turn off
                        endcase
                    end
%000000             2'b01: begin
        
%000000                 ANODES <= 4'b1101;
        
%000000                 case (HEX[7:4])
%000000                     4'b0000: CATHODES <= 8'b10000001;
%000000                     4'b0001: CATHODES <= 8'b11001111;
%000000                     4'b0010: CATHODES <= 8'b10010010;
%000000                     4'b0011: CATHODES <= 8'b10000110;
%000000                     4'b0100: CATHODES <= 8'b11001100;
%000000                     4'b0101: CATHODES <= 8'b10100100;
%000000                     4'b0110: CATHODES <= 8'b10100000;
%000000                     4'b0111: CATHODES <= 8'b10001111;
%000000                     4'b1000: CATHODES <= 8'b10000000;
%000000                     4'b1001: CATHODES <= 8'b10001100;
%000000                     4'b1010: CATHODES <= 8'b10001000;  //a
%000000                     4'b1011: CATHODES <= 8'b11100000;
%000000                     4'b1100: CATHODES <= 8'b10110001;
%000000                     4'b1101: CATHODES <= 8'b11000010;
%000000                     4'b1110: CATHODES <= 8'b10110000;
%000000                     4'b1111: CATHODES <= 8'b10111000;
%000000                     default: CATHODES <= 8'b11111111;  // all off on error
                        endcase
                    end
%000000             2'b10: begin
        
%000000                 ANODES <= 4'b1011;
        
%000000                 case (HEX[11:8])
%000000                     4'b0000: CATHODES <= 8'b10000001;
%000000                     4'b0001: CATHODES <= 8'b11001111;
%000000                     4'b0010: CATHODES <= 8'b10010010;
%000000                     4'b0011: CATHODES <= 8'b10000110;
%000000                     4'b0100: CATHODES <= 8'b11001100;
%000000                     4'b0101: CATHODES <= 8'b10100100;
%000000                     4'b0110: CATHODES <= 8'b10100000;
%000000                     4'b0111: CATHODES <= 8'b10001111;
%000000                     4'b1000: CATHODES <= 8'b10000000;
%000000                     4'b1001: CATHODES <= 8'b10001100;
%000000                     4'b1010: CATHODES <= 8'b10001000;  //a
%000000                     4'b1011: CATHODES <= 8'b11100000;
%000000                     4'b1100: CATHODES <= 8'b10110001;
%000000                     4'b1101: CATHODES <= 8'b11000010;
%000000                     4'b1110: CATHODES <= 8'b10110000;
%000000                     4'b1111: CATHODES <= 8'b10111000;
%000000                     default: CATHODES <= 8'b11111111;  // all off on error
                        endcase
                    end
%000000             2'b11: begin
        
%000000                 ANODES <= 4'b0111;
        
%000000                 case (HEX[15:12])
%000000                     4'b0000: CATHODES <= 8'b10000001;
%000000                     4'b0001: CATHODES <= 8'b11001111;
%000000                     4'b0010: CATHODES <= 8'b10010010;
%000000                     4'b0011: CATHODES <= 8'b10000110;
%000000                     4'b0100: CATHODES <= 8'b11001100;
%000000                     4'b0101: CATHODES <= 8'b10100100;
%000000                     4'b0110: CATHODES <= 8'b10100000;
%000000                     4'b0111: CATHODES <= 8'b10001111;
%000000                     4'b1000: CATHODES <= 8'b10000000;
%000000                     4'b1001: CATHODES <= 8'b10001100;
%000000                     4'b1010: CATHODES <= 8'b10001000;  //a
%000000                     4'b1011: CATHODES <= 8'b11100000;
%000000                     4'b1100: CATHODES <= 8'b10110001;
%000000                     4'b1101: CATHODES <= 8'b11000010;
%000000                     4'b1110: CATHODES <= 8'b10110000;
%000000                     4'b1111: CATHODES <= 8'b10111000;
%000000                     default: CATHODES <= 8'b11111111;  // all off on error
                        endcase
                    end
%000000             default: begin  // digit error turn everything off
%000000                 ANODES <= 4'hF;
%000000                 CATHODES <= 8'hFF;
%000000                 r_disp_digit <= 2'b00;
                    end
                endcase
        
%000000         r_disp_digit <= r_disp_digit + 1;
            end
        
        
        
        endmodule
        
