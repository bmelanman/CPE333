`ifndef CAM_TB
`define CAM_TB 1

`include "cam_types_pkg.sv"
import cam_types_pkg::*;

module cam_tb (
    cam_if itf
);

    cam dut (
        .clk_i    (itf.clk),
        .reset_n_i(itf.reset_n),
        .rw_n_i   (itf.rw_n),
        .valid_i  (itf.valid_i),
        .key_i    (itf.key),
        .val_i    (itf.val_i),
        .val_o    (itf.val_o),
        .valid_o  (itf.valid_o)
    );

    default clocking tb_clk @(negedge itf.clk);
    endclocking

    task static reset();
        itf.reset_n <= 1'b0;
        repeat (5) @(tb_clk);
        itf.reset_n <= 1'b1;
        repeat (5) @(tb_clk);
    endtask

    // DO NOT MODIFY CODE ABOVE THIS LINE

    typedef enum {
        CAM_WRITE = 0,
        CAM_READ  = 1
    } rw_t;

    typedef enum {
        SIGNAL_LOW  = 0,
        SIGNAL_HIGH = 1
    } signal_state_t;

    localparam integer MAX_NUM_ENTRIES = camsize_p;
    localparam key_t MAX_KEY_T = (2 ** key_width_p) - 1;
    localparam val_t MAX_VAL_T = (2 ** val_width_p) - 1;

    // cam_verify_valid_o - Verify the valid_o signal is equal to the expected state
    task static cam_verify_valid_o(input signal_state_t expected_state);

        if (signal_state_t'(itf.valid_o) != expected_state) begin
            $error("%0d: %0t: READ error detected, valid_o (%0d) != expected_state (%0d)",
                   `__LINE__, $time, itf.valid_o, expected_state);
            report_error(READ_ERROR_INVALID_KEY);
        end

    endtask : cam_verify_valid_o

    // reset - Resets the CAM
    task static cam_reset();
        // Set the reset signal to low
        itf.reset_n <= 1'b0;
        // Wait for the next clock edge
        @(tb_clk);
        // Set the reset signal back to high
        itf.reset_n <= 1'b1;
    endtask : cam_reset

    // read - Reads a value from a given key from the CAM
    task static cam_read(input key_t read_key, output val_t read_val);
        // Set the key
        itf.key <= read_key;
        // Set the R/W signal to read
        itf.rw_n <= CAM_READ;
        // Set the valid signal to high
        itf.valid_i <= 1'b1;
        // Wait for the next clock edge
        @(tb_clk);
        // Return the value
        val = itf.val_o;
    endtask : cam_read

    // write - Writes a given key and value to the CAM
    task static cam_write(input key_t write_key, input val_t write_val);
        // Set the key and value
        itf.key <= write_key;
        itf.val_i <= write_val;
        // Set the read/write signal to write
        itf.rw_n <= CAM_WRITE;
        // Set the valid signal to high
        itf.valid_i <= 1'b1;
        // Wait for the next clock edge
        @(tb_clk);
    endtask : cam_write

    // cam_write_all - Writes to all available entries in the CAM
    task static cam_write_all(input val_t write_val_offset);
        integer write_i;
        // Write to each available entry in the CAM
        for (write_i = 0; write_i < MAX_NUM_ENTRIES; ++write_i) begin
            cam_write(write_i, (write_i + write_val_offset));
        end
    endtask : cam_write_all

    // cam_read_all - Reads from all available entries in the CAM and verifies the output matches the input
    task static cam_read_all(input val_t read_val_offset);
        integer read_i;
        val_t cam_input, cam_output;
        assign cam_input = (read_i + read_val_offset);

        // Loop through each entry in the CAM
        for (read_i = 0; read_i < MAX_NUM_ENTRIES; ++read_i) begin
            // Read from the CAM
            cam_read(read_i, cam_output);
            // Verify the valid_o signal is high
            assert (itf.valid_o == 1)
            else begin
                $error("%0d: %0t: READ error detected at entry %0d, valid_o != HIGH", `__LINE__,
                       $time, read_i);
                report_error(READ_ERROR_INVALID_KEY);
            end
            // Verify the output value is the same as the input value
            assert (cam_output == cam_input)
            else begin
                $error(
                    "%0d: %0t: READ error detected at entry %0d, cam_output (%0d) != cam_input (%0d)",
                    `__LINE__, $time, read_i, cam_output, cam_input);
                report_error(READ_ERROR_INCORRECT_VALUE);
            end
        end
    endtask : cam_read_all

    // cam_read_empty - Reads from all available entries in the CAM and verifies the output is 0
    task static cam_read_empty();
        integer read_i;
        val_t   cam_output;

        // Loop through each entry in the CAM
        for (read_i = 0; read_i < MAX_NUM_ENTRIES; ++read_i) begin
            // Read from the CAM
            cam_read(read_i, cam_output);
            // Verify the valid_o signal is low
            cam_verify_valid_o(SIGNAL_LOW);
            // Verify the output value is 0
            assert (cam_output == 0)
            else begin
                $error("%0d: %0t: READ error detected at entry %0d, cam_output (%0d) != 0",
                       `__LINE__, $time, read_i, cam_output);
                report_error(RESET_DOES_NOT_CLEAR_VALUES);
            end
        end
    endtask : cam_read_empty

    // assert_output - Compare an expected output value with an actual output value
    function static void assert_output(input val_t expected, input val_t actual);
        assert (expected == actual)
        else begin
            $error("%0d: %0t: %s error detected", `__LINE__, $time, INCORRECT_DATA_O_ON_YUMI_I);
            report_error(INCORRECT_DATA_O_ON_YUMI_I);
        end
    endfunction : assert_output

    val_t cam_input = MAX_VAL_T, cam_output;
    key_t cam_key = '1;

    initial begin
        $display("Starting CAM Tests");

        /** Reset and read from an empty CAM *********************************/

        // Reset the CAM
        cam_reset();
        // Read from the CAM
        cam_read_empty();

        /** Write and read a single value to an empty CAM ********************/

        // Write the value to the CAM
        cam_write(cam_key, cam_input);
        // Read the value back from the CAM
        cam_read(cam_key, cam_output);
        // Verify the output value is the same as the input value
        assert_output(cam_output, cam_input);

        /** Reset a CAM with a single value **********************************/

        // Reset the CAM
        cam_reset();
        // Read from the CAM
        cam_read_empty();

        /** Write to all entries in the CAM **********************************/

        // Write to each available entry in the CAM
        cam_write_all(cam_key);
        // Read and verify each entry from the CAM
        cam_read_all(cam_key);

        /** Reset a full CAM *************************************************/

        // Reset the CAM
        cam_reset();
        // Read from the CAM
        cam_read_empty();

        /** Evict a key/value pair from each entry in the CAM ****************/

        // Write to each available entry in the CAM
        cam_write_all(cam_key);
        // Overwrite each entry in the CAM with a new key/value pair
        cam_write_all(cam_key - 1);
        // Read and verify each entry from the CAM
        cam_read_all(cam_key - 1);

        /** Overwrite a key's value in the CAM *******************************/

        // Reset the CAM
        cam_reset();
        // Write the value to the CAM
        cam_write(cam_key, cam_input);
        // Overwrite the value in the CAM
        cam_write(cam_key, cam_input - 1);
        // Read the value back from the CAM
        cam_read(cam_key, cam_output);
        // Verify the valid_o signal is high
        cam_verify_valid_o(SIGNAL_HIGH);
        // Verify the output value is the same as the input value
        assert_output(cam_output, (cam_input - 1));

        /** Write, then overwrite, then read from the same key in the CAM ****/

        // Reset the CAM
        cam_reset();
        // Write a value to the CAM
        cam_write(cam_key, cam_input);
        // Overwrite the value in the CAM
        cam_write(cam_key, cam_input - 1);
        // Read the value back from the CAM
        cam_read(cam_key, cam_output);
        // Verify the valid_o signal is high
        cam_verify_valid_o(SIGNAL_HIGH);
        // Verify the output value is the same as the input value
        assert_output(cam_output, (cam_input - 1));

        /** Done! ************************************************************/

        // Make sure your test bench exits by calling itf.finish();
        itf.finish();

        $error("TB: Illegal Exit ocurred");
    end

endmodule : cam_tb

`endif  /* CAM_TB */
