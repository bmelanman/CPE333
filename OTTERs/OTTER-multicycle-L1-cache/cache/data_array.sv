module data_array #(
    parameter int s_offset = 5,
    parameter int s_index  = 3
) (
    input clk,
    input rst,
    input [s_mask-1:0] write_en,
    input [s_index-1:0] rindex,
    input [s_index-1:0] windex,
    input [s_line-1:0] datain,
    output logic [s_line-1:0] dataout
);

    localparam logic s_mask = 2 ** s_offset;
    localparam logic s_line = 8 * s_mask;
    localparam logic num_sets = 2 ** s_index;

    /* synthesis ramstyle = "logic" */
    logic [s_line-1:0] data[num_sets-1];
    int i;

    // Asynchronous read
    always_comb begin
        for (int i = 0; i < s_mask; i++) begin
            dataout[8*i+:8] = (write_en[i] & (rindex == windex)) ? datain[8*i+:8] : data[rindex][8*i+:8];
        end
    end

    // Synchronous write
    always_ff @(posedge clk) begin

        if (rst) begin

            for (i = 0; i < num_sets; ++i) begin
                data[i] <= '0;
            end

        end else begin

            for (i = 0; i < s_mask; i++) begin
                data[windex][8*i+:8] <= ((write_en[i]) ? datain[8*i+:8] : data[windex][8*i+:8]);
            end

        end
    end

endmodule : data_array
