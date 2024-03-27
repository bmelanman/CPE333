//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Engineer: J. Callenes, Bryce Melander
        // Create Date: 03/05/2024
        //
        // Project: CPE 333 - OTTER
        // Design:  OTTER Memory - Dual Port
        // Module:  OTTER_MEM_dualport_singlecycle_pipeline
        // Deps:    otter_memory.mem
        //
        // Description: A dual port memory module for the OTTER processor
        //
        //////////////////////////////////////////////////////////////////////////////////
        
        module OTTER_MEM_dualport_singlecycle_pipeline (
            // Control Signals
 004999     input logic       MEM_CLK,
%000000     input logic       MEM_SIGN,
%000000     input logic [1:0] MEM_SIZE,
        
            // Port 1 - Instruction Memory
%000001     input  logic        MEM_READ1,
            // input  logic [ 1:0] MEM_BYTE_EN1,
 000020     input  logic [31:0] MEM_ADDR1,
%000002     output logic [31:0] MEM_DOUT1,
        
            // Port 2 - Data Memory
%000000     input  logic        MEM_READ2,
%000000     input  logic        MEM_WRITE2,
            // input  logic [ 1:0] MEM_BYTE_EN2,
%000000     input  logic [31:0] MEM_ADDR2,
%000000     input  logic [31:0] MEM_DIN2,
%000000     output logic [31:0] MEM_DOUT2,
        
            // IO Bus Signals
%000000     input  logic [31:0] IO_IN,
%000000     output logic        IO_WR,
%000000     output logic        ERR
        );
            parameter int ACTUAL_WIDTH = 14;  // 16 KiB x 32
            parameter int ACTUAL_DEPTH = 2 ** ACTUAL_WIDTH;
            parameter int NUM_COL = 4;
            parameter int COL_WIDTH = 8;
        
%000000     logic saved_mem_sign;
%000000     logic [1:0] saved_mem_size;
%000000     logic [31:0] saved_mem_addr2;
        
%000000     wire [ACTUAL_WIDTH-1:0] memAddr1, memAddr2;
%000000     logic memWrite2;
%000000     logic [31:0] memOut2;
%000001     logic [31:0] ioIn_buffer = 0;
%000000     logic [NUM_COL-1:0] weA;
        
            assign memAddr1 = MEM_ADDR1[ACTUAL_WIDTH+1:2];
            assign memAddr2 = MEM_ADDR2[ACTUAL_WIDTH+1:2];
        
            (* rom_style="{distributed | block}" *)
            (* ram_decomp = "power" *) logic [31:0] memory[ACTUAL_DEPTH - 1];
        
%000001     initial begin
%000001         $readmemh("otter_memory.mem", memory, 0, ACTUAL_DEPTH - 1);
                //for (int z = 0; z < 16; z++) $display("  0x%X", memory[z]);
            end
        
            // The `*` symbol denotes a feature that is not yet supported if across word boundary
%000001     always_comb begin
%000001         case (MEM_SIZE)
%000001             0:       weA = 4'b0001 << MEM_ADDR2[1:0];  // sb
%000000             1:       weA = 4'b0011 << MEM_ADDR2[1:0];  // sh *
%000000             2:       weA = 4'b1111;  // sw *
%000000             default: weA = 4'b0000;
                endcase
            end
        
            integer i, j;
 002500     always_ff @(posedge MEM_CLK) begin
                // Port 2: Data
%000000         if (memWrite2) begin
%000000             j <= 0;
%000000             for (i = 0; i < NUM_COL; i = i + 1) begin
%000000                 if (weA[i]) begin
%000000                     case (MEM_SIZE)
%000000                         0: begin
                                    // MEM_DIN2[(3-i)*COL_WIDTH +: COL_WIDTH];
%000000                             memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[7:0];
                                end
%000000                         1: begin
%000000                             memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[j*COL_WIDTH+:COL_WIDTH];
%000000                             j <= j + 1;
                                end
%000000                         default: begin  // case 2 + default
%000000                             memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[i*COL_WIDTH+:COL_WIDTH];
                                end
                            endcase
                        end
                    end
                end
        
%000000         if (MEM_READ2) memOut2 <= memory[memAddr2];
        
                // Port 1: Instructions
 002500         if (MEM_READ1) MEM_DOUT1 <= memory[memAddr1];
        
 002500         saved_mem_size  <= MEM_SIZE;
 002500         saved_mem_sign  <= MEM_SIGN;
 002500         saved_mem_addr2 <= MEM_ADDR2;
            end
        
            // Check for misalligned or out of bounds memory accesses
%000004     logic illegal_mem_access1, illegal_mem_access2;
        
            assign illegal_mem_access1 = ((MEM_ADDR1 >= ACTUAL_DEPTH) || (MEM_ADDR1[1:0] != 2'b0)) ? 1 : 0;
            assign illegal_mem_access2 = ((MEM_ADDR2 >= ACTUAL_DEPTH) || (MEM_ADDR2[1:0] != 2'b0)) ? 1 : 0;
            assign ERR = ((illegal_mem_access1 && MEM_READ1) || illegal_mem_access2 && (MEM_READ2 || MEM_WRITE2)) ? 1 : 0;
        
 002500     always_ff @(posedge MEM_CLK) if (MEM_READ2) ioIn_buffer <= IO_IN;
        
            // ===  Second cycle ==== Post Processing ==============================
%000000     logic [31:0] memOut2_sliced;
        
            //logic [ 2:0] _saved_mem;
            //assign _saved_mem = {saved_mem_sign, saved_mem_size};
        
            // The `**` symbol denotes a feature that is not yet supported
%000001     always_comb begin
%000001         memOut2_sliced = 32'b0;
        
%000001         case ({
%000001             saved_mem_sign, saved_mem_size
                })
 002501             0: begin
 002501                 case (saved_mem_addr2[1:0])
%000000                     3: memOut2_sliced = {{24{memOut2[31]}}, memOut2[31:24]};  // lb (endianess)
%000001                     2: memOut2_sliced = {{24{memOut2[23]}}, memOut2[23:16]};
%000002                     1: memOut2_sliced = {{24{memOut2[15]}}, memOut2[15:8]};
 002498                     default: memOut2_sliced = {{24{memOut2[7]}}, memOut2[7:0]};  // case 0
                        endcase
                    end
        
%000000             1: begin
%000000                 case (saved_mem_addr2[1:0])
%000000                     3: memOut2_sliced = {8'b0, {16{memOut2[31]}}, memOut2[31:24]};  // lh (spans two words **)
%000000                     2: memOut2_sliced = {{16{memOut2[31]}}, memOut2[31:16]};
%000000                     1: memOut2_sliced = {{16{memOut2[23]}}, memOut2[23:8]};
%000000                     default: memOut2_sliced = {{16{memOut2[15]}}, memOut2[15:0]};  // case 0
                        endcase
                    end
        
%000000             2: begin
%000000                 case (saved_mem_addr2[1:0])
%000000                     1: memOut2_sliced = {8'b0, memOut2[31:8]};  // (spans two words **)
%000000                     0: memOut2_sliced = memOut2;  // lw
%000000                     default: begin
                                // Output _saved_mem + saved_mem_addr2 + a bunch of F5's
%000000                         memOut2_sliced = (
%000000                             ({29'b0, saved_mem_sign, saved_mem_size} << 24) | (saved_mem_addr2 << 16) | (32'hF5F5)
                                );
                            end
                        endcase
                    end
        
%000000             4: begin
%000000                 case (saved_mem_addr2[1:0])
%000000                     3:       memOut2_sliced = {24'd0, memOut2[31:24]};  // lbu
%000000                     2:       memOut2_sliced = {24'd0, memOut2[23:16]};
%000000                     1:       memOut2_sliced = {24'd0, memOut2[15:8]};
%000000                     default: memOut2_sliced = {24'd0, memOut2[7:0]};  // case 0
                        endcase
                    end
        
%000000             5: begin
%000000                 case (saved_mem_addr2[1:0])
%000000                     3:       memOut2_sliced = {memOut2};  // lhu // spans two words **
%000000                     2:       memOut2_sliced = {16'd0, memOut2[31:16]};
%000000                     1:       memOut2_sliced = {16'd0, memOut2[23:8]};
%000000                     default: memOut2_sliced = {16'd0, memOut2[15:0]};  // case 0
                        endcase
                    end
        
%000000             default: begin
                        // Output _saved_mem + a bunch of F5's
%000000                 memOut2_sliced = (({29'b0, saved_mem_sign, saved_mem_size} << 24) | 32'h00F5F5F5);
                    end
                endcase
            end
        
%000001     always_comb begin
%000000         if (saved_mem_addr2 >= 32'h11000000) MEM_DOUT2 = ioIn_buffer;
 002501         else MEM_DOUT2 = memOut2_sliced;
            end
        
%000001     always_comb begin
%000001         IO_WR = 0;
%000000         if (MEM_ADDR2 >= 32'h11000000) begin
%000000             if (MEM_WRITE2) IO_WR = 1;
%000000             memWrite2 = 0;
 002501         end else begin
 002501             memWrite2 = MEM_WRITE2;
                end
            end
        
        endmodule
        
