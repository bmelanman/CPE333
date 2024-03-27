`ifndef MULTIPLIER_IF
`define MULTIPLIER_IF 1

`include "mult_types_pkg.sv"
import mult_types_pkg::*;

interface multiplier_if;

    bit clk, reset_n, start, rdy, done;
    operand_t multiplicand, multiplier;
    result_t product;
    op_e mult_op;
    time timestamp;

    typedef struct {
        logic bp[time];  // BAD_PRODUCT errors
        logic nr[time];  // NOT_READY errors
    } stu_errors_t;
    stu_errors_t stu_errors;

    // Clock generation
    initial begin
        clk = 1'b0;
        forever begin
            #5;
            clk = ~clk;
        end
    end

    initial timestamp = 0;
    always @(posedge clk) timestamp += 1;

    function automatic void tb_report_dut_error(error_e err);
        case (err)
            BAD_PRODUCT: stu_errors.bp[timestamp] = 1'b1;
            NOT_READY: stu_errors.nr[timestamp] = 1'b1;
            default: $display("Unknown error reported by DUT");
        endcase
    endfunction

    modport testbench(
        output mult_op, rdy, product, done,
        input clk, reset_n, multiplicand, multiplier, start,
        ref stu_errors, timestamp
    );

    task static finish();
        #1000;
        $finish;
    endtask

endinterface : multiplier_if

`endif  /* MULTIPLIER_IF */
