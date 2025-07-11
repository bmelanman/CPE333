`ifndef FIFO_IF
`define FIFO_IF 1

interface fifo_if;

    import fifo_types_pkg::*;

    bit clk, reset_n, valid_i, valid_o, yumi, rdy;
    word_t data_i, data_o;
    time timestamp;

    initial begin
        clk = 1'b0;
        forever begin
            #5;
            clk = ~clk;
        end
    end

    task finish();
        repeat (100) @(posedge clk);
        $finish;
    endtask

    initial timestamp = 0;
    always @(posedge clk) timestamp += 1;

    typedef struct {
        logic res[time];
        logic data[time];
    } stu_errors_t;

    stu_errors_t stu_errors;

    function automatic void tb_report_dut_error(error_e err);
        case (err)
            RESET_DOES_NOT_CAUSE_READY_O: stu_errors.res[timestamp] = 1'b1;
            INCORRECT_DATA_O_ON_YUMI_I: stu_errors.data[timestamp] = 1'b1;
            default: $fatal("TB reporting Unknown error");
        endcase
    endfunction

endinterface

`endif  /* FIFO_IF */
