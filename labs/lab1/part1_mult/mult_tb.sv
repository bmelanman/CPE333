`ifndef MULTIPLIER_TB
`define MULTIPLIER_TB 1

`include "mult_types_pkg.sv"
import mult_types_pkg::*;

module mult_tb (
    multiplier_if.testbench itf
);

    add_shift_multiplier dut (
        .clk_i         (itf.clk),
        .reset_n_i     (itf.reset_n),
        .multiplicand_i(itf.multiplicand),
        .multiplier_i  (itf.multiplier),
        .start_i       (itf.start),
        .ready_o       (itf.rdy),
        .product_o     (itf.product),
        .done_o        (itf.done)
    );

    assign itf.mult_op = dut.ms.op;
    default clocking tb_clk @(negedge itf.clk);
    endclocking

    // error_e defined in package mult_types_pkg in file types.sv
    // Asynchronously reports error in DUT to grading harness
    function static void report_error(error_e error);
        itf.tb_report_dut_error(error);
    endfunction : report_error

    // Resets the multiplier
    task static reset();
        itf.reset_n <= 1'b0;
        ##5;
        itf.reset_n <= 1'b1;
        ##1;
    endtask : reset

    // DO NOT MODIFY CODE ABOVE THIS LINE

    typedef enum {
        SIGNAL_LOW  = 0,
        SIGNAL_HIGH = 1
    } signal_state_t;

    // mult_reset - Resets the multiplier
    task static mult_reset();
        // Set the reset_n signal low
        itf.reset_n <= 1'b0;
        // Wait for the next negative edge of the clock
        @(tb_clk);
        // Set the reset_n signal high
        itf.reset_n <= 1'b1;
        // Wait for the next negative edge of the clock
        @(tb_clk);
    endtask : mult_reset

    // mult_start - Starts the multiplier
    task static mult_start();
        // Set the start signal high
        itf.start <= 1'b1;
        // Wait for the next negative edge of the clock
        @(tb_clk);
        // Set the start signal low
        itf.start <= 1'b0;
    endtask : mult_start

    // mult_verify_product - Verifies the product is correct
    task static mult_verify_product(operand_t expected_product);
        if (itf.product != expected_product) begin
            $error("%0d: %0t: BAD_PRODUCT error detected, product (%0d) != expected_product (%0d)",
                   `__LINE__, $time, itf.product, expected_product);
            report_error(BAD_PRODUCT);
        end
    endtask : mult_verify_product

    // mult_verify_ready - Verifies the multiplier is ready
    task static mult_verify_ready(signal_state_t expected_state);
        if (signal_state_t'(itf.rdy) != expected_state) begin
            $error("%0d: %0t: NOT_READY error detected, rdy (%0d) != expected_state (%0d)",
                   `__LINE__, $time, itf.rdy, expected_state);
            report_error(NOT_READY);
        end
    endtask : mult_verify_ready

    // mult_verify_done - Verifies the multiplier is done
    task static mult_verify_done(signal_state_t expected_state);
        if (signal_state_t'(itf.done) != expected_state) begin
            $error("%0d: %0t: NOT_DONE error detected, done (%0d) != 1'b1", `__LINE__, $time,
                   itf.done);
            report_error(NOT_DONE);
        end
    endtask : mult_verify_done

    /* Uncomment to "monitor" changes to adder operational state over time */
    initial $monitor("[%0t] dut-op: op: %s", $time, dut.ms.op.name);

    localparam operand_t MAX_INPUT_VALUE = (2 ** width_p) - 1;

    // Reset the multiplier
    initial itf.reset_n = 1'b0;

    initial begin

        integer test_case = 0;
        operand_t i, j;

        logic enable_test1, enable_test2;

        mult_reset();

        /** Multiplier Testing ***********************************************/

        // Verify the multiplier is ready
        mult_verify_ready(SIGNAL_HIGH);

        // Iterate through all possible input combinations
        for (i = 0; i < MAX_INPUT_VALUE; i = i + 1) begin
            for (j = 0; j < MAX_INPUT_VALUE; j = j + 1) begin

                // Set the multiplicand and multiplier
                itf.multiplicand = i;
                itf.multiplier   = j;

                // Start the multiplier
                start();

                // Verify the multiplier is no longer ready
                mult_verify_ready(SIGNAL_LOW);

                /********************/

                // Perform the appropriate test
                case (test_case)

                    // Test 0: Test the multiplier with all possible input combinations
                    default: begin
                        // Wait for the multiplier to be done
                        @(tb_clk iff (itf.done == 1'b1));
                        // Verify the product
                        mult_verify_product(i * j);
                    end

                    // Test 1: Test the multiplier with all possible input combinations,
                    // resetting the multiplier after each operation
                    1: begin
                        // Wait for the multiplier to be done
                        @(tb_clk iff (itf.done == 1'b1));
                        // Verify the product
                        mult_verify_product(i * j);
                        // Verify the multiplier is ready
                        mult_verify_ready(SIGNAL_HIGH);
                        // Reset the multiplier
                        mult_reset();
                    end

                    // Test 2: Test the multiplier with all possible input combinations,
                    // resetting the multiplier before each operation is complete
                    2: begin
                        // Wait a clock cycle
                        @(tb_clk);
                        // Reset the multiplier
                        mult_reset();
                        // Verify the multiplier is not done
                        mult_verify_done(SIGNAL_LOW);
                    end


                    // Test 3: Test the multiplier with all possible input combinations,
                    // while repeatedly toggling the start signal during operation
                    3: begin
                        // Wait for the done signal
                        while (itf.done == 1'b0) begin
                            // Toggle the start signal
                            itf.start <= ~itf.start;
                            // Wait a clock cycle
                            @(tb_clk);
                            // Verify the multiplier is still not ready
                            mult_verify_ready(SIGNAL_LOW);
                        end
                        // Verify the product
                        mult_verify_product(i * j);
                    end
                endcase

                /********************/

                // Verify the multiplier is ready
                mult_verify_ready(SIGNAL_HIGH);

            end
        end

        /** Done! ************************************************************/

        itf.finish();  // Use this finish task in order to let grading harness
                       // complete in process and/or scheduled operations

        $error("Improper Simulation Exit");
    end

endmodule : mult_tb

`endif  /* MULTIPLIER_TB */
