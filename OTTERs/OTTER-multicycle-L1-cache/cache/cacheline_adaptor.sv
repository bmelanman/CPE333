`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Bryce Melander
//
// Create Date: 02/20/2024
// Design Name: cacheline_adaptor
// Target Devices: Basys3
// Description: The Cache Line Adaptor: A module that interfaces between the
// memory controller and the cache line. It is responsible for reading and
// writing cache lines to and from memory in 32-bit words.
//
// Revision:
// Revision 0.01 - Initial version
////////////////////////////////////////////////////////////////////////////////

module cacheline_adaptor (
    input logic clk,  // System clock
    input logic rst,  // System reset

    // Cache I/O
    input  logic         cache_read,   // Enable signal for reading from the cache line
    input  logic         cache_write,  // Enable signal for writing to the cache line
    output logic         cache_valid,  // Data valid signal from the cache line
    input  logic [ 31:0] cache_addr,   // Starting address to read from or write to
    output logic [255:0] cache_rdata,  // Data read from the cache line
    input  logic [255:0] cache_wdata,  // Data to write to the cache line

    // Memory I/O
    output logic        mem_read,   // Enable signal for reading from memory
    output logic        mem_write,  // Enable signal for writing to memory
    input  logic        mem_valid,  // Data valid signal from memory
    output logic [31:0] mem_addr,   // Address to read from or write to
    input  logic [31:0] mem_rdata,  // Data read from memory
    output logic [31:0] mem_wdata,  // Data to write to memory
    output logic [ 3:0] mem_strobe  // Byte mask for memory writes (always 0xF for 32-bit words)
);

    typedef enum logic [1:0] {
        IDLE,
        READ,
        WAIT_RD,
        WRITE,
        WAIT_WR,
        DONE
    } state_t;

    state_t curr_state, next_state = IDLE;
    state_t wr_state;

    logic [255:0] cacheline_buff = 256'h0;
    logic [31:0] addr_buff = 32'h0;
    logic [2:0] cacheline_idx = 3'b0;

    assign cache_rdata = cacheline_buff;
    assign mem_addr = addr_buff;
    assign mem_wdata = cacheline_buff[32*cacheline_idx+:32];

    assign mem_read = ((curr_state == READ) || (curr_state == WAIT_RD));
    assign mem_write = ((curr_state == WRITE) || (curr_state == WAIT_WR));
    assign cache_valid = (curr_state == DONE);

    // Tracks if the cache is reading or writing
    assign wr_state = cache_read ? READ : (cache_write ? WRITE : IDLE);

    assign mem_strobe = 4'b1111;  // Always write 4 bytes

    // State Machine
    always_ff @(posedge clk) begin

        if (rst) begin
            curr_state <= IDLE;
            cacheline_buff <= 256'h0;
            addr_buff <= 32'h0;
        end else begin
            curr_state <= next_state;
        end

        case (curr_state)

            IDLE: begin
                if (wr_state == READ) begin
                    next_state <= WAIT_RD;
                end else if (wr_state == WRITE) begin
                    next_state <= WAIT_WR;
                    cacheline_idx <= 3'b0;
                end

                addr_buff <= cache_addr;
            end

            WAIT_RD: begin
                if (mem_valid) begin
                    next_state <= READ;
                    cacheline_idx <= 3'b001;  // Start at the second word because ...
                    cacheline_buff[31:0] <= mem_rdata;  // .. the first word was already read
                end
            end

            READ: begin
                if (cacheline_idx == 3'b111) begin
                    next_state <= WAIT_RD;
                end

                cacheline_buff[32*cacheline_idx+:32] <= mem_rdata;
                cacheline_idx <= cacheline_idx + 1;
                //next_state <= READ; // next_state is already set to READ
            end

            WAIT_WR: begin
                if (mem_valid) begin
                    cacheline_idx <= 3'b001;  // Start at the second word
                    next_state <= WRITE;
                end
            end

            WRITE: begin
                if (cacheline_idx == 3'b111) begin
                    next_state <= WAIT_WR;
                end

                //mem_wdata <= cacheline_buff[32*cacheline_idx+:32]; // Moved to an assign statement
                cacheline_idx <= cacheline_idx + 1;
                //next_state <= WRITE; // next_state is already set to WRITE
            end

            default: begin  // DONE state
                next_state <= IDLE;
            end

        endcase
    end

endmodule : cacheline_adaptor
