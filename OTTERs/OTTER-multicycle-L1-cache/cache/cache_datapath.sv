`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Bryce Melander
//
// Create Date: 02/20/2024
// Design Name: cache_datapath
// Target Devices: Basys3
// Description: The Cache Datapath: Contains the data, valid, dirty, tag, and
// LRU arrays, comparators, muxes, logic gates and other supporting logic.
//
// Revision:
// Revision 0.01 - Initial version
////////////////////////////////////////////////////////////////////////////////

module cache_datapath #(
    parameter int s_offset = 5,
    parameter int s_index  = 3,
    parameter int s_tag    = 32 - s_offset - s_index,
    parameter int s_mask   = 2**s_offset,
    parameter int s_line   = 8*s_mask,
    parameter int num_sets = 2**s_index
) (
    input logic clk,  // System clock
    input logic rst,  // System reset

    // Cache I/O
    input  logic [      31:0] cache_addr,
    output logic [s_line-1:0] cache_rdata,
    input  logic [s_line-1:0] cache_wdata,
    output logic [s_mask-1:0] cache_byte_en,

    // Memory I/O
    input  logic [31:0] mem_addr,
    output logic [31:0] mem_rdata,
    input  logic [31:0] mem_wdata,

    // Controller I/O
    input  logic        ctrl_tag_ld,
    input  logic        ctrl_valid_ld,
    input  logic        ctrl_dirty_ld,
    input  logic        ctrl_dirty_datain,
    output logic        ctrl_dirty_dataout,
    output logic        ctrl_hit,
    input  ctrl_state_t ctrl_state
);

    // Local Parameters
    localparam logic num_ways = 2;
    localparam logic s_lru = 3;

    //region Datapath signals ***************************************/
    logic [s_index-1:0] set_idx;
    logic [s_mask-1:0] mask[num_ways];

    logic way_idx;
    logic [s_line-1:0] line_datain;
    logic [s_line-1:0] line_dataout[num_ways];

    logic [s_tag-1:0] tag_datain;
    logic [s_tag-1:0] tag_dataout[num_ways];

    logic [3:0] valid_dataout;

    logic dirty_dataout[num_ways];

    logic lru_ld;
    logic [s_lru-1:0] lru_datain;
    logic [s_lru-1:0] lru_dataout[num_sets] = '{default: '0};

    logic [1:0] way_hit;
    logic [31:0] hit_counter = '{default: '0};
    logic [31:0] miss_counter = '{default: '0};
    //endregion *****************************************************/

    //region Way 0 **************************************************/
    data_array #(
        .s_offset(s_offset),
        .s_index (s_index)
    ) way0 (
        .clk(clk),
        .rst(rst),
        .write_en(mask[0]),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(line_datain),
        .dataout(line_dataout[0])
    );
    array #(
        .width  (s_tag),
        .s_index(s_index)
    ) tag0 (
        .clk(clk),
        .rst(rst),
        .write_en(ctrl_tag_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(tag_datain),
        .dataout(tag_dataout[0])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) valid0 (
        .clk(clk),
        .rst(rst),
        .write_en(ctrl_valid_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(1'b1),
        .dataout(valid_dataout[0])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) dirty0 (
        .clk(clk),
        .rst(rst),
        .write_en(ctrl_dirty_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(ctrl_dirty_datain),
        .dataout(dirty_dataout[0])
    );
    //endregion *****************************************************/

    //region Way 1 **************************************************/
    data_array #(
        .s_offset(s_offset),
        .s_index (s_index)
    ) way1 (
        .clk(clk),
        .rst(rst),
        .write_en(mask[1]),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(line_datain),
        .dataout(line_dataout[1])
    );
    array #(
        .width  (s_tag),
        .s_index(s_index)
    ) tag1 (
        .clk(clk),
        .rst(rst),
        .write_en(ctrl_tag_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(tag_datain),
        .dataout(tag_dataout[1])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) valid1 (
        .clk(clk),
        .rst(rst),
        .write_en(ctrl_valid_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(1'b1),
        .dataout(valid_dataout[1])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) dirty1 (
        .clk(clk),
        .rst(rst),
        .write_en(ctrl_dirty_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(ctrl_dirty_datain),
        .dataout(dirty_dataout[1])
    );
    //endregion *****************************************************/

    //region LRU ****************************************************/
    array #(
        .width  (3),
        .s_index(s_index)
    ) lru (
        .clk(clk),
        .rst(rst),
        .write_en(lru_ld),
        .rindex(set_idx),
        .windex(set_idx),
        .datain(lru_datain),
        .dataout(lru_dataout)
    );
    //endregion *****************************************************/

    // Cache Hit and Miss Counters
    always_ff @(posedge clk) begin
        if (ctrl_hit) begin
            hit_counter <= hit_counter + 1;
            lru_dataout[set_idx] <= lru_datain;
        end
        if (ctrl_tag_ld) miss_counter <= miss_counter + 1;
    end

    // Cache Hit Logic
    always_comb begin
        way_hit = 2'b00;

        if (ctrl_tag_ld) begin
            for (int i = 0; i < num_ways; ++i) begin
                way_hit[i] = ((tag_datain == tag_dataout[i]) && valid_dataout[i]);
            end
        end
    end

    // Cache Set Index Logic
    assign set_idx = cache_addr[s_index+s_offset-1:s_offset];

    // Cache Byte Enable Logic
    assign cache_byte_en = cache_addr[s_offset-1:2];

    // Cache Data Read and Write Logic
    assign way_idx = (ctrl_state == READ) ? way_hit[1] : lru_dataout[set_idx];
    assign cache_rdata = line_dataout[way_idx];
    assign line_datain = (ctrl_state == READ && i == way_hit[1]) ? cache_wdata : line_dataout[i];

    // Cache Dirty Logic
    assign ctrl_dirty_dataout = dirty_dataout[way_idx];

    // Cache Tag Write Logic
    assign tag_datain = cache_addr[s_tag+s_index+s_offset-1:s_index+s_offset];

    // Cache LRU Write Logic
    assign lru_ld = (ctrl_state == READ) ? 1'b1 : 1'b0;
    assign lru_datain = way_hit[0];

    // Memory Read and Write Logic
    assign mem_rdata = (ctrl_state == READ) ? cache_rdata : 32'b0;

endmodule : cache_datapath
