//-----------------------------------------------------------------------
//-- Clock Divider Module
//-----------------------------------------------------------------------

module OTTER_Clock_Div (
    input CLK_IN,
    output logic CLK_OUT = 0
);
    integer MAX_COUNT = 200000;  // 2 MHz
    integer div_cnt = 0;

    always @(posedge CLK_IN) begin
        if (div_cnt == MAX_COUNT) begin
            CLK_OUT = ~CLK_OUT;
            div_cnt = 0;
        end else div_cnt = div_cnt + 1;
    end
endmodule
