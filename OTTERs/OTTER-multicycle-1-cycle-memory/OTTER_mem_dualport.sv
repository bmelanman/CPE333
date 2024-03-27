`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer: J. Callenes
//
// Create Date: 01/27/2019 08:37:11 AM
// Design Name:
// Module Name: bram_dualport
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////

//port 1 is read only (instructions - used in fetch stage)
//port 2 is read/write (data - used in writeback stage)
module OTTER_mem_dualport (
    input        [31:0] MEM_ADDR1,   //Instruction Memory Port
    input        [31:0] MEM_ADDR2,   //Data Memory Port
    input               MEM_CLK,
    input        [31:0] MEM_DIN2,
    input               MEM_WRITE2,
    input               MEM_READ1,
    input               MEM_READ2,
    //input [1:0] MEM_BYTE_EN1,
    //input [1:0] MEM_BYTE_EN2,
    input        [31:0] IO_IN,
    output              ERR,
    input        [ 1:0] MEM_SIZE,
    input               MEM_SIGN,
    output logic [31:0] MEM_DOUT1,
    output logic [31:0] MEM_DOUT2,
    output logic        IO_WR
);
    parameter int ACTUAL_WIDTH = 14;  //32KB     16K x 32
    parameter int ACTUAL_SIZE = 2 ** ACTUAL_WIDTH;
    parameter int NUM_COL = 4;
    parameter int COL_WIDTH = 8;

    logic [ACTUAL_WIDTH-1:0] memAddr1, memAddr2;
    logic memWrite2;
    logic [31:0] memOut2;
    logic [31:0] ioIn_buffer = 0;
    logic [NUM_COL-1:0] weA;

    assign memAddr1 = MEM_ADDR1[ACTUAL_WIDTH+1:2];
    assign memAddr2 = MEM_ADDR2[ACTUAL_WIDTH+1:2];

    (* rom_style="{distributed | block}" *)
    (* ram_decomp = "power" *) logic [31:0] memory[ACTUAL_SIZE];

    initial begin
        $readmemh("otter_memory.mem", memory, 0, ACTUAL_SIZE - 1);
    end


    always_comb begin
        case (MEM_SIZE)
            0:       weA = 4'b0001 << MEM_ADDR2[1:0];  //sb
            1:       weA = 4'b0011 << MEM_ADDR2[1:0];  //sh      //Not supported if across word boundary
            2:       weA = 4'b1111;  //sw        //Not supported if across word boundary
            default: weA = 4'b0000;
        endcase
    end
    integer i, j;
    always_ff @(posedge MEM_CLK) begin
        //PORT 2  //Data
        if (memWrite2) begin

            /* verilator lint_off BLKSEQ */
            j = 0;
            /* verilator lint_off BLKSEQ */

            for (i = 0; i < NUM_COL; i = i + 1) begin
                if (weA[i]) begin
                    case (MEM_SIZE)
                        // MEM_DIN2[(3-i)*COL_WIDTH +: COL_WIDTH];
                        0: memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[7:0];

                        1: begin
                            memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[j*COL_WIDTH+:COL_WIDTH];
                            j = j + 1;
                        end

                        2: memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[i*COL_WIDTH+:COL_WIDTH];

                        default: memory[memAddr2][i*COL_WIDTH+:COL_WIDTH] <= MEM_DIN2[i*COL_WIDTH+:COL_WIDTH];
                    endcase
                end
            end
        end
        if (MEM_READ2) memOut2 <= memory[memAddr2];
        //PORT 1  //Instructions
        if (MEM_READ1) MEM_DOUT1 <= memory[memAddr1];
    end

    //Check for misalligned or out of bounds memory accesses
    assign ERR = ((MEM_ADDR1 >= ACTUAL_SIZE)|| (MEM_ADDR2 >= ACTUAL_SIZE)
                    || MEM_ADDR1[1:0] != 2'b0 || MEM_ADDR2[1:0] !=2'b0)? 1 : 0;


    always_ff @(posedge MEM_CLK) if (MEM_READ2) ioIn_buffer <= IO_IN;

    logic [31:0] memOut2_sliced;

    //    integer MSIZE=8;
    //    always_comb
    //        case(MEM_SIZE)
    //            0: MSIZE=8;
    //            1: MSIZE=16;
    //            2: MSIZE=32;
    //            default: MSIZE=32;
    //        endcase

    always_comb begin
        memOut2_sliced = 32'b0;
        //            if(MEM_SIGN)
        //                memOut2_sliced = $signed(memOut2[i*MSIZE +: MSIZE]);
        //             else
        //                memOut2_sliced = memOut2[MEM_ADDR2[1:0]*MSIZE +: MSIZE];

        case ({
            MEM_SIGN, MEM_SIZE
        })
            0:
            case (MEM_ADDR2[1:0])
                3:       memOut2_sliced = {{24{memOut2[31]}}, memOut2[31:24]};  //lb     //endianess
                2:       memOut2_sliced = {{24{memOut2[23]}}, memOut2[23:16]};
                1:       memOut2_sliced = {{24{memOut2[15]}}, memOut2[15:8]};
                default: memOut2_sliced = {{24{memOut2[7]}}, memOut2[7:0]};
            endcase

            1:
            case (MEM_ADDR2[1:0])
                3:       memOut2_sliced = {8'b0, {16{memOut2[31]}}, memOut2[31:24]};  //lh
                2:       memOut2_sliced = {{16{memOut2[31]}}, memOut2[31:16]};
                1:       memOut2_sliced = {{16{memOut2[23]}}, memOut2[23:8]};
                default: memOut2_sliced = {{16{memOut2[15]}}, memOut2[15:0]};
            endcase

            2:
            case (MEM_ADDR2[1:0])
                1: memOut2_sliced = {8'b0, memOut2[31:8]};  //spans two words, NOT YET SUPPORTED!
                0: memOut2_sliced = memOut2;  //lw
                default: ;
            endcase

            4:
            case (MEM_ADDR2[1:0])
                3:       memOut2_sliced = {24'd0, memOut2[31:24]};  //lbu
                2:       memOut2_sliced = {24'd0, memOut2[23:16]};
                1:       memOut2_sliced = {24'd0, memOut2[15:8]};
                default: memOut2_sliced = {24'd0, memOut2[7:0]};
            endcase

            5:
            case (MEM_ADDR2[1:0])
                3:       memOut2_sliced = memOut2;  //lhu //spans two words, NOT YET SUPPORTED!
                2:       memOut2_sliced = {16'd0, memOut2[31:16]};
                1:       memOut2_sliced = {16'd0, memOut2[23:8]};
                default: memOut2_sliced = {16'd0, memOut2[15:0]};
            endcase

            default: ;
        endcase
    end

    always_comb begin
        IO_WR = 0;
        if (MEM_ADDR2 >= 32'h11000000) begin
            if (MEM_WRITE2) IO_WR = 1;
            memWrite2 = 0;
            MEM_DOUT2 = ioIn_buffer;
        end else begin
            memWrite2 = MEM_WRITE2;
            MEM_DOUT2 = memOut2_sliced;
        end
    end

endmodule
