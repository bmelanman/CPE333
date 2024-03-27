/* A register array to be used for tag arrays, LRU array, etc. */

module array #(
    parameter int s_index = 3,
    parameter int width   = 1
) (
    input clk,
    input rst,
    input write_en,
    input [s_index-1:0] rindex,
    input [s_index-1:0] windex,
    input [width-1:0] datain,
    output logic [width-1:0] dataout
);

    localparam logic num_sets = 2 ** s_index;

    /* synthesis ramstyle = "logic" */
    logic [width-1:0] data[num_sets-1];
    logic [width-1:0] _dataout;

    assign dataout = _dataout;

    // Asynchronous read
    always_comb begin
        _dataout = (load & (rindex == windex)) ? datain : data[rindex];
    end

    // Synchronous write
    always_ff @(posedge clk) begin

        if (rst) begin
            for (int i = 0; i < num_sets; ++i) begin
                data[i] <= '0;
            end

        end else if (load) begin
            data[windex] <= datain;

        end else begin
            data[windex] <= data[windex];

        end

    end

endmodule : array
