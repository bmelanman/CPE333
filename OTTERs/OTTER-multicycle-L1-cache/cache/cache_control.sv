`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Bryce Melander
//
// Create Date: 02/20/2024
// Design Name: cache_datapath
// Target Devices: Basys3
// Description: The Cache Controller: A state machine that controls the
// behavior of the cache.
//
// Revision:
// Revision 0.01 - Initial version
////////////////////////////////////////////////////////////////////////////////

module cache_control (
    input logic clk,  // System clock

    // Cache I/O
    input  logic cache_read,   // Read from cache
    input  logic cache_write,  // Write to cache
    output logic cache_valid,  // Cache data is valid

    // Memory I/O
    output logic mem_read,   // Read from physical memory
    output logic mem_write,  // Write to physical memory
    input  logic mem_valid,  // Memory data is valid

    // Controller I/O
    output logic        ctrl_tag_ld,     // Load tag data into cache
    output logic        ctrl_valid_ld,   // Load valid data into cache
    output logic        ctrl_dirty_ld,   // Load dirty data into cache
    output logic        ctrl_dirty_in,   // Dirty data input
    input  logic        ctrl_dirty_out,  // Dirty data output
    input  logic        ctrl_hit,        // Cache hit signal
    output ctrl_state_t ctrl_state       // Cache state
);

    // State Machine
    typedef enum logic [1:0] {
        CHECK_HIT,
        READ_MEM
    } state_t;

    state_t curr_state, next_state;

    always_ff @(posedge clk) begin
        curr_state <= next_state;
    end

    always_comb begin
        ctrl_tag_ld   = 1'b0;
        ctrl_valid_ld = 1'b0;
        ctrl_dirty_ld = 1'b0;
        ctrl_dirty_in = 1'b0;
        ctrl_state    = IDLE;

        mem_read = 1'b0;
        mem_write = 1'b0;

        case (curr_state)
            CHECK_HIT: begin
                if (cache_read || cache_write) begin
                    if (ctrl_hit) begin
                        cache_valid = 1'b1;
                        if (cache_write) begin
                            ctrl_dirty_ld = 1'b1;
                            ctrl_dirty_in = 1'b1;
                            ctrl_state = WRITE;
                        end
                    end
                end else if (ctrl_dirty_out) begin
                    mem_write = 1'b1;
                end
            end

            READ_MEM: begin
                mem_read = 1'b1;
                ctrl_state = IDLE;

                ctrl_dirty_ld = 1'b1;
                ctrl_dirty_in = 1'b0;

                if (mem_valid) begin
                    ctrl_tag_ld   = 1'b1;
                    ctrl_valid_ld = 1'b1;
                end

            end

            default: ;
        endcase
    end

    always_comb begin
        next_state = curr_state;

        case (curr_state)
            CHECK_HIT: begin
                if ((cache_read || cache_write) && !ctrl_hit && ctrl_dirty_out) begin
                    next_state = READ_MEM;
                end
            end

            READ_MEM: begin
                if (mem_valid) begin
                    next_state = CHECK_HIT;
                end
            end

            default: ;
        endcase

    end

endmodule : cache_control
