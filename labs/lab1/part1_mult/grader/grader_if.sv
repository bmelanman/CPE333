`ifndef GRADER_IF
`define GRADER_IF 1

`include "grader_types_pkg.sv"
import mult_types_pkg::*;
import grader_types_pkg::*;

interface grader_if (
    ref bit clk
);

    typedef struct {
        logic bp[time];
        logic nr[time];
    } grader_errors_t;
    grader_errors_t grader_errors;

    std::mailbox #(trans_t) transbox = new();

    errnos_e grader_errno = ERR_NONE;
    covers_t covers = '0;

    logic scbclk, monclk;
    initial scbclk = 1'b0;
    initial monclk = 1'b0;

    always @(clk) #1 scbclk = ~scbclk;
    always @(clk) #2 monclk = ~monclk;

    /*************** Logical Clock **************/
    time timestamp;
    initial timestamp = 0;
    always @(posedge itf.clk) timestamp += 1;

    modport TrMon(input timestamp, monclk, ref transbox);
endinterface

//module d_grader_if ();
//endmodule

`endif  /* GRADER_IF */
