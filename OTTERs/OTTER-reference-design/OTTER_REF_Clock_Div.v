`timescale 1ns / 1ps
//-----------------------------------------------------------------------
//-- Clock divider module
//-----------------------------------------------------------------------

module OTTER_REF_Clock_Div (
    input CLK_IN,
    output logic CLK_OUT = 0
);
    integer cnt_max = 200000;  // 2 MHz
    integer div_cnt = 0;

    always @(posedge CLK_IN) begin
        if (div_cnt == cnt_max) begin
            CLK_OUT = ~CLK_OUT;
            div_cnt = 0;
        end else div_cnt = div_cnt + 1;
    end
endmodule
