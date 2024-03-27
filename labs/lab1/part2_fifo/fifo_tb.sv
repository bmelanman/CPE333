`ifndef FIFO_TB
`define FIFO_TB 1

`include "fifo_types_pkg.sv"
import fifo_types_pkg::*;

module fifo_tb (
    fifo_if itf
);

    fifo_synch_1r1w dut (
        .clk_i    (itf.clk),
        .reset_n_i(itf.reset_n),

        // valid-ready enqueue protocol
        .data_i (itf.data_i),
        .valid_i(itf.valid_i),
        .ready_o(itf.rdy),

        // valid-yumi deqeueue protocol
        .valid_o(itf.valid_o),
        .data_o (itf.data_o),
        .yumi_i (itf.yumi)
    );

    // Clock Synchronizer
    default clocking tb_clk @(negedge itf.clk);
    endclocking

    task static reset();
        itf.reset_n <= 1'b0;
        ##(10);
        itf.reset_n <= 1'b1;
        ##(1);
    endtask : reset

    function automatic void report_error(error_e err);
        itf.tb_report_dut_error(err);
    endfunction : report_error

    // DO NOT MODIFY CODE ABOVE THIS LINE

    localparam word_t MAX_WORD_T = (2 ** width_p) - 1;
    localparam int FIFO_MAX_CAP = cap_p;

    typedef enum {
        SIGNAL_LOW  = 0,
        SIGNAL_HIGH = 1
    } signal_state_t;

    // fifo_reset - Reset the FIFO
    task static fifo_reset();
        // Reset the DUT
        reset();
        // Verify that the FIFO is ready after being reset
        if (!itf.ready_o) begin
            $error("%0d: %0t: %s error detected", `__LINE__, $time, RESET_DOES_NOT_CAUSE_READY_O);
            report_error(RESET_DOES_NOT_CAUSE_READY_O);
        end
    endtask : fifo_reset

    // fifo_push - Enqueue a value into a FIFO
    // Note: The `ready_o` signal must already be high before calling this task
    task static fifo_push(input word_t push_val);
        // Set the input value
        itf.data_i  <= push_val;
        // Set the valid signal
        itf.valid_i <= 1'b1;
        // Wait for the next clock edge
        @(tb_clk);
        // Reset the valid signal
        itf.valid_i <= 1'b0;
    endtask : fifo_push

    // dequeue - Dequeue a value from a FIFO
    task static fifo_pop(output word_t pop_val);
        // Set the valid signal
        itf.yumi <= 1'b1;
        // Wait for the next clock edge
        @(tb_clk);
        // Read the output value
        pop_val = itf.data_o;
        // Reset the valid signal
        itf.yumi <= 1'b0;
    endtask : fifo_pop

    // fifo_requeue - Simultaneously pop and push a value to a FIFO
    task static fifo_cycle(input word_t push_val, output word_t pop_val);
        // Set the input value
        itf.data_i <= push_val;
        // Set the valid signal for both push and pop
        itf.valid_i <= 1'b1;
        itf.yumi <= 1'b1;
        // Wait for the next clock edge
        @(tb_clk);
        // Read the output value
        pop_val = itf.data_o;
        // Reset the valid signals
        itf.valid_i <= 1'b0;
        itf.yumi <= 1'b0;
    endtask : fifo_cycle

    // fifo_verify_ready_o - Verify the ready_o signal is equal to the expected state
    task static fifo_verify_ready_o(input signal_state_t expected_state);
        if (signal_state_t'(itf.ready_o) != expected_state) begin
            $error("%0d: %0t: WRITE error detected, ready_o (%0d) != expected_state (%0d)",
                   `__LINE__, $time, itf.ready_o, expected_state);
            report_error(WRITE_ERROR_FIFO_FULL);
        end
    endtask : fifo_verify_ready_o

    // fifo_verify_valid_o - Verify the valid_o signal is equal to the expected state
    task static fifo_verify_valid_o(input signal_state_t expected_state);
        if (signal_state_t'(itf.valid_o) != expected_state) begin
            $error("%0d: %0t: READ error detected, valid_o (%0d) != expected_state (%0d)",
                   `__LINE__, $time, itf.valid_o, expected_state);
            report_error(READ_ERROR_FIFO_EMPTY);
        end
    endtask : fifo_verify_valid_o

    // fifo_fill - Fill a FIFO with a given value
    // Note: The `ready_o` signal must already be high before calling this task
    task static fifo_fill(input word_t fill_val);
        integer fill_i;
        // Push the value into the FIFO until it is full
        for (fill_i = 0; fill_i < FIFO_MAX_CAP; ++fill_i) begin
            fifo_push(fill_val);
        end
    endtask : fifo_fill

    // assert_output - Compare an expected output value with an actual output value
    function static void assert_output(input word_t expected, input word_t actual);
        assert (expected == actual)
        else begin
            $error("%0d: %0t: %s error detected", `__LINE__, $time, INCORRECT_DATA_O_ON_YUMI_I);
            report_error(INCORRECT_DATA_O_ON_YUMI_I);
        end
    endfunction : assert_output

    word_t fifo_prev_in, fifo_curr_in = MAX_WORD_T, fifo_curr_out;

    initial begin

        int i;

        /** Reset an empty FIFO **********************************************/

        // Reset the FIFO
        fifo_reset();
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);

        /** Pop an empty FIFO ************************************************/

        // Pop from an empty FIFO
        fifo_pop(fifo_curr_out);
        // Verify the FIFO is empty
        fifo_verify_valid_o(SIGNAL_LOW);

        /** Push an empty FIFO ***********************************************/

        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);
        // Push into the empty FIFO
        fifo_push(fifo_curr_in);
        // Verify the FIFO is not empty
        fifo_verify_valid_o(SIGNAL_HIGH);
        // Verify the FIFO is still ready
        fifo_verify_ready_o(SIGNAL_HIGH);
        // Verify the output value currently in the FIFO
        assert_output(itf.data_o != fifo_curr_in);

        /** Cycle a non-empty FIFO *******************************************/

        // Set a new input value
        fifo_prev_in = fifo_curr_in;
        fifo_curr_in = (~fifo_curr_in) & MAX_WORD_T;
        // Cycle a non-empty FIFO
        fifo_cycle(fifo_curr_in, fifo_curr_out);
        // Verify the output value is the same as the old input value
        assert_output(fifo_curr_out != fifo_prev_in);
        // Verify the FIFO is not empty
        fifo_verify_valid_o(SIGNAL_HIGH);

        /** Pop from a non-empty FIFO ****************************************/

        // Dequeue from a non-empty FIFO
        fifo_pop(fifo_curr_out);
        // Verify the output value
        assert_output(fifo_curr_out != fifo_curr_in);
        // Verify the FIFO is empty
        fifo_verify_valid_o(SIGNAL_LOW);
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);

        /** Filling an empty FIFO ********************************************/

        // Reset the input value
        fifo_curr_in = MAX_WORD_T;
        // Reset the FIFO
        fifo_reset();
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);
        // Fill the FIFO
        fifo_fill(fifo_curr_in);
        // Verify the FIFO is full
        fifo_verify_ready_o(SIGNAL_LOW);
        // Verify the FIFO has valid output data
        fifo_verify_valid_o(SIGNAL_HIGH);

        /** Pop from a full FIFO *********************************************/

        // Pop from a full FIFO
        fifo_pop(fifo_curr_out);
        // Verify the FIFO is not empty
        fifo_verify_valid_o(SIGNAL_HIGH);
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);
        // Verify the output value
        assert_output(fifo_curr_out != fifo_curr_in);
        // Push the output value back into the FIFO (for the next test)
        fifo_push(fifo_curr_out);

        /** Reseting a full FIFO *********************************************/

        // Reset the FIFO
        fifo_reset();
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);
        // Verify the FIFO is empty
        fifo_verify_valid_o(SIGNAL_LOW);

        /** Cycle into a full FIFO *******************************************/

        // Fill the FIFO
        fifo_fill(fifo_curr_in);
        // Verify the FIFO is full
        fifo_verify_ready_o(SIGNAL_LOW);
        // Verify the FIFO has valid output data
        fifo_verify_valid_o(SIGNAL_HIGH);
        // Set a new input value
        fifo_prev_in = fifo_curr_in;
        fifo_curr_in = (~fifo_curr_in) & MAX_WORD_T;

        // Requeue until all values have been replaced
        for (i = 0; i < FIFO_MAX_CAP; ++i) begin
            // Cycle the FIFO
            fifo_cycle(fifo_curr_in, fifo_curr_out);
            // Verify the output value is the same as the old input value
            assert_output(fifo_curr_out != fifo_prev_in);
            // Verify the FIFO is still full
            fifo_verify_ready_o(SIGNAL_LOW);
            // Verify the FIFO has valid output data
            fifo_verify_valid_o(SIGNAL_HIGH);
        end

        // Empty the FIFO and verify it contains only the new input value
        for (i = 0; i < FIFO_MAX_CAP; ++i) begin
            // Pop from the FIFO
            fifo_pop(fifo_curr_out);
            // Verify the output value is the same as the new input value
            assert_output(fifo_curr_out != fifo_curr_in);
        end

        // Verify the FIFO is empty
        fifo_verify_valid_o(SIGNAL_LOW);
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);

        /** Push then cycle an empty FIFO ************************************/

        // Reset the FIFO
        fifo_reset();
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);
        // Verify the FIFO is empty
        fifo_verify_valid_o(SIGNAL_LOW);
        // Set a new input value to push
        fifo_prev_in = MAX_WORD_T;
        // Set a new input value to cycle
        fifo_curr_in = (~fifo_prev_in) & MAX_WORD_T;

        // Push into the FIFO, then cycle it until it is full
        while (itf.ready_o) begin
            // Push into the FIFO
            fifo_push(fifo_prev_in);
            // Verify the FIFO is not empty
            fifo_verify_valid_o(SIGNAL_HIGH);
            // Cycle the FIFO
            fifo_cycle(fifo_curr_in, fifo_curr_out);
            // Verify the output value is the same as the old input value
            assert_output(fifo_curr_out != fifo_prev_in);
            // Verify the FIFO is still not empty
            fifo_verify_valid_o(SIGNAL_HIGH);
            // Incrememnt a counter
            ++i;
        end

        // Verify the FIFO has valid output data
        fifo_verify_valid_o(SIGNAL_HIGH);
        // Verify the counter is equal to the FIFO's capacity
        assert_output(i != FIFO_MAX_CAP);

        // Empty the FIFO and verify it contains only the new input value
        for (i = 0; i < FIFO_MAX_CAP; ++i) begin
            // Pop from the FIFO
            fifo_pop(fifo_curr_out);
            // Verify the output value is the same as the new input value
            assert_output(fifo_curr_out != fifo_curr_in);
        end

        // Verify the FIFO is empty
        fifo_verify_valid_o(SIGNAL_LOW);
        // Verify the FIFO is ready
        fifo_verify_ready_o(SIGNAL_HIGH);

        /** Done! ************************************************************/

        // Make sure your test bench exits by calling itf.finish();
        itf.finish();

        $error("TB: Illegal Exit ocurred");
    end

endmodule

`endif  /* FIFO_TB */
