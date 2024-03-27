`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Bryce Melander
//
// Create Date: 02/20/2024
// Design Name: cache
// Target Devices: Basys3
// Description: The Cache: A cache that interfaces between the CPU and memory.
//
// Revision:
// Revision 0.01 - Initial version
////////////////////////////////////////////////////////////////////////////////

typedef enum logic [1:0] {
    IDLE  = 2'b00,
    READ  = 2'b01,
    WRITE = 2'b10
} ctrl_state_t;

module cache #(
    parameter int s_offset = 5,
    parameter int s_index  = 3,
    parameter int s_tag    = 32 - s_offset - s_index,
    parameter int s_mask   = 2**s_offset,
    parameter int s_line   = 8*s_mask,
    parameter int num_sets = 2**s_index
) (
    input logic clk,  // System clock
    input logic rst,  // System reset

    // Cache Interface (to/from CPU)
    input  logic         cache_read,
    input  logic         cache_write,
    output logic         cache_valid,
    input  logic [ 31:0] cache_addr,
    output logic [255:0] cache_rdata,
    input  logic [255:0] cache_wdata,
    output logic [  3:0] cache_byte_en,

    // Physical Memory Interface (to/from Memory)
    output logic        mem_read,
    output logic        mem_write,
    input  logic        mem_valid,
    output logic [31:0] mem_addr,
    input  logic [31:0] mem_rdata,
    output logic [31:0] mem_wdata,
    output logic [ 3:0] mem_strobe
);

    // Internal Signals
    logic ctrl_tag_ld = 0;
    logic ctrl_valid_ld = 0;
    logic ctrl_dirty_ld = 0;
    logic ctrl_dirty_in = 0;
    logic ctrl_dirty_out = 0;
    logic ctrl_hit = 0;
    ctrl_state_t ctrl_state = 0;


    // Cache Controller
    cache_control cache_control (.*);

    // Cacheline Bus Adapter
    cacheline_adaptor cacheline_adaptor (.*);

    // Cache Datapath
    cache_datapath cache_datapath (.*);

endmodule : cache
