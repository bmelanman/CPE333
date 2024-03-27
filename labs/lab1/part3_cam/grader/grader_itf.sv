`ifndef GRADER_IF
`define GRADER_IF

interface grader_if (
    ref bit clk
);
    import cam_types_pkg::*;
    import grader_types_pkg::*;

    mailbox #(trans_t) transbox = new();

    typedef struct {logic read_error[time];} grd_errors_t;
    grd_errors_t grd_errors;

    function automatic void grd_report_dut_error(error_e err, time timestamp);
        case (err)
            READ_ERROR: begin
                $display("%0t GITF: Recording Read Error with timestamp %0t", $time, timestamp);
                grd_errors.read_error[timestamp] = 1'b1;
            end
            default: $fatal("TB reporting Unknown error");
        endcase
    endfunction

    covers_t covers;
    errnos_e errno;
    bit scbclk, monclk;


    initial scbclk = 1'b0;
    initial monclk = 1'b0;
    initial errno = ERR_NONE;
    initial covers = '0;

    always @(clk) #1 scbclk = ~scbclk;
    always @(clk) #2 monclk = ~monclk;


endinterface : grader_if

`endif  /* GRADER_IF */
