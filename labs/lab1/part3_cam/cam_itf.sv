`ifndef CAM_IF
`define CAM_IF

// Interface to use in testbench
interface cam_if;
    import cam_types_pkg::*;
    bit clk, reset_n, rw_n, valid_i, valid_o;
    key_t key;
    val_t val_i, val_o;
    time timestamp;

    task static finish();
        repeat (100) @(posedge clk);
        $finish;
    endtask : finish

    // Generate clk signal
    always #5 clk = (clk === 1'b0);

    initial timestamp = 0;
    always @(posedge clk) timestamp += 1;

    typedef struct {logic read_error[time];} stu_errors_t;
    stu_errors_t stu_errors;

    function automatic void tb_report_dut_error(error_e err);
        $display("%0t: TB: Reporting %s at %0t", $time, err.name, timestamp);
        case (err)
            READ_ERROR: stu_errors.read_error[timestamp] = 1'b1;
            default: $fatal("TB reporting Unknown error");
        endcase
    endfunction

endinterface : cam_if

`endif  /* CAM_IF */
