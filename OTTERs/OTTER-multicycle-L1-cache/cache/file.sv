module file #(
    parameter int s_offset = 5,
    parameter int s_index = 3,
    parameter int s_tag = 32 - s_offset - s_index,
    parameter int s_mask = 2 ** s_offset,
    parameter int s_line = 8 * s_mask,
    parameter int num_sets = 2 ** s_index
) (
    input                     clk,
    /* CPU memory data signals */
    input  logic [      31:0] cache_byte_en,
    input  logic [      31:0] cache_addr,
    input  logic [s_line-1:0] cache_wdata,
    output logic [s_line-1:0] cache_rdata,

    /* Physical memory data signals */
    input  logic [s_line-1:0] mem_rdata,
    output logic [s_line-1:0] mem_wdata,
    output logic [      31:0] mem_addr,

    /* Control signals */
    input  logic       ctrl_tag_ld,
    input  logic       ctrl_valid_ld,
    input  logic       ctrl_dirty_ld,
    input  logic       ctrl_dirty_in,
    output logic       ctrl_dirty_out,
    output logic       ctrl_hit,
    input  logic [1:0] ctrl_state
);

    /* Datapath signals */
    logic dirty_o[4];
    logic dirty_i[4];
    logic dirty_ld[4];
    logic valid_ld[4];
    logic tag_ld[4];
    logic [2:0] lru_i;
    logic [2:0] lru_o[num_sets] = '{default: '0};
    logic [s_line-1:0] line_in[4];
    logic [s_line-1:0] line_out[4];
    logic [s_tag-1:0] address_tag;
    logic [s_tag-1:0] tag_out[4];
    logic [s_index-1:0] index;
    logic [31:0] mask[4];
    logic [3:0] valid_out;
    logic [3:0] way_hit;

    logic [31:0] hit_counter = '{default: '0};
    logic [31:0] miss_counter = '{default: '0};


    always_ff @(posedge clk) begin
        if (ctrl_hit) hit_counter <= hit_counter + 32'd1;
        if (ctrl_tag_ld) miss_counter <= miss_counter + 32'd1;
    end

    always_ff @(posedge clk) begin
        if (ctrl_hit) begin
            lru_o[index] <= lru_i;
        end
    end

    always_comb begin : calc_lru
        case (way_hit)
            /* Way A was ctrl_hit */
            4'b1000: begin
                lru_i = {1'b0, 1'b0, lru_o[index][0]};
            end
            /* Way B was ctrl_hit */
            4'b0100: begin
                lru_i = {1'b0, 1'b1, lru_o[index][0]};
            end
            /* Way C was ctrl_hit */
            4'b0010: begin
                lru_i = {1'b1, lru_o[index][1], 1'b0};
            end
            /* Way D was ctrl_hit */
            4'b0001: begin
                lru_i = {1'b1, lru_o[index][1], 1'b1};
            end
            default: lru_i = lru_o[index];
        endcase
    end : calc_lru

    always_comb begin : calc_hit
        way_hit[3] = valid_out[3] && (address_tag == tag_out[3]);
        way_hit[2] = valid_out[2] && (address_tag == tag_out[2]);
        way_hit[1] = valid_out[1] && (address_tag == tag_out[1]);
        way_hit[0] = valid_out[0] && (address_tag == tag_out[0]);
        ctrl_hit   = way_hit[3] || way_hit[2] || way_hit[1] || way_hit[0];
    end : calc_hit


    always_comb begin : update_way
        for (int i = 0; i < 4; i++) begin
            mask[i] = 32'd0;
            tag_ld[i] = 1'b0;
            valid_ld[i] = 1'b0;
            dirty_ld[i] = 1'b0;
            line_in[i] = cache_wdata;
            dirty_i[i] = 1'b0;
        end

        case (ctrl_state)
            /* Load from memory */
            2'b00: begin
                case (lru_o[index])
                    /* MRU was A/B, A, C -> Replace D or MRU was A/B, B, C -> Replace D */
                    3'b000, 3'b010: begin
                        line_in[0] = mem_rdata;
                        mask[0] = 32'hFFFFFFFF;
                        tag_ld[0] = ctrl_tag_ld;
                        valid_ld[0] = ctrl_valid_ld;
                        dirty_i[0] = ctrl_dirty_in;
                        dirty_ld[0] = ctrl_dirty_ld;
                    end
                    /* MRU was A/B, A, D -> Replace C or MRU was A/B, B, D -> Replace C */
                    3'b001, 3'b011: begin
                        line_in[1] = mem_rdata;
                        mask[1] = 32'hFFFFFFFF;
                        tag_ld[1] = ctrl_tag_ld;
                        valid_ld[1] = ctrl_valid_ld;
                        dirty_i[1] = ctrl_dirty_in;
                        dirty_ld[1] = ctrl_dirty_ld;
                    end
                    /* MRU was C/D, A, C -> Replace B or MRU was C/D, A, D -> Replace B */
                    3'b100, 3'b101: begin
                        line_in[2] = mem_rdata;
                        mask[2] = 32'hFFFFFFFF;
                        tag_ld[2] = ctrl_tag_ld;
                        valid_ld[2] = ctrl_valid_ld;
                        dirty_i[2] = ctrl_dirty_in;
                        dirty_ld[2] = ctrl_dirty_ld;
                    end
                    /* MRU was C/D, B, C -> Replace A or MRU was C/D, A, C -> Replace A */
                    3'b110, 3'b111: begin
                        line_in[3] = mem_rdata;
                        mask[3] = 32'hFFFFFFFF;
                        tag_ld[3] = ctrl_tag_ld;
                        valid_ld[3] = ctrl_valid_ld;
                        dirty_i[3] = ctrl_dirty_in;
                        dirty_ld[3] = ctrl_dirty_ld;
                    end
                    default: ;
                endcase
            end
            /* Write from CPU */
            2'b01: begin
                case (way_hit)
                    4'b0001: begin
                        line_in[0] = cache_wdata;
                        mask[0] = cache_byte_en;
                        tag_ld[0] = ctrl_tag_ld;
                        valid_ld[0] = ctrl_valid_ld;
                        dirty_i[0] = ctrl_dirty_in;
                        dirty_ld[0] = ctrl_dirty_ld;
                    end
                    4'b0010: begin
                        line_in[1] = cache_wdata;
                        mask[1] = cache_byte_en;
                        tag_ld[1] = ctrl_tag_ld;
                        valid_ld[1] = ctrl_valid_ld;
                        dirty_i[1] = ctrl_dirty_in;
                        dirty_ld[1] = ctrl_dirty_ld;
                    end
                    4'b0100: begin
                        line_in[2] = cache_wdata;
                        mask[2] = cache_byte_en;
                        tag_ld[2] = ctrl_tag_ld;
                        valid_ld[2] = ctrl_valid_ld;
                        dirty_i[2] = ctrl_dirty_in;
                        dirty_ld[2] = ctrl_dirty_ld;
                    end
                    4'b1000: begin
                        line_in[3] = cache_wdata;
                        mask[3] = cache_byte_en;
                        tag_ld[3] = ctrl_tag_ld;
                        valid_ld[3] = ctrl_valid_ld;
                        dirty_i[3] = ctrl_dirty_in;
                        dirty_ld[3] = ctrl_dirty_ld;
                    end
                    default: ;
                endcase
            end
            default: ;
        endcase
    end : update_way

    always_comb begin : cache_output
        /* assign the ctrl_dirty_out for the control */
        ctrl_dirty_out = 1'b0;

        /* Set physical mem address and the writeback data and dirty bit for control logic to dictate pmem_write */
        case (lru_o[index])
            /* MRU was A/B, A, C -> Replace D or MRU was A/B, B, C -> Replace D */
            3'b000, 3'b010: begin
                mem_addr = dirty_o[0] ? {tag_out[0], cache_addr[s_offset+s_index-1:0]} : cache_addr;
                mem_wdata = line_out[0];
                ctrl_dirty_out = dirty_o[0];
            end
            /* MRU was A/B, A, D -> Replace C or MRU was A/B, B, D -> Replace C */
            3'b001, 3'b011: begin
                mem_addr = dirty_o[1] ? {tag_out[1], cache_addr[s_offset+s_index-1:0]} : cache_addr;
                mem_wdata = line_out[1];
                ctrl_dirty_out = dirty_o[1];
            end
            /* MRU was C/D, A, C -> Replace B or MRU was C/D, A, D -> Replace B */
            3'b100, 3'b101: begin
                mem_addr = dirty_o[2] ? {tag_out[2], cache_addr[s_offset+s_index-1:0]} : cache_addr;
                mem_wdata = line_out[2];
                ctrl_dirty_out = dirty_o[2];
            end
            /* MRU was C/D, B, C -> Replace A or MRU was C/D, A, C -> Replace A */
            3'b110, 3'b111: begin
                mem_addr = dirty_o[3] ? {tag_out[3], cache_addr[s_offset+s_index-1:0]} : cache_addr;
                mem_wdata = line_out[3];
                ctrl_dirty_out = dirty_o[3];
            end
            default: ;
        endcase

        /* Set the returned data to CPU based off ctrl_hit */

        case (way_hit)
            4'b0001: cache_rdata = line_out[0];
            4'b0010: cache_rdata = line_out[1];
            4'b0100: cache_rdata = line_out[2];
            default: cache_rdata = line_out[3];
        endcase
    end : cache_output

    always_comb begin
        address_tag = cache_addr[31:s_offset+s_index];
        index = cache_addr[s_offset+s_index-1:s_offset];
    end

    //region
    /* Way instansiation */
    data_array #(
        .s_offset(s_offset),
        .s_index (s_index)
    ) wayA (
        .clk(clk),
        .write_en(mask[3]),
        .rindex(index),
        .windex(index),
        .datain(line_in[3]),
        .dataout(line_out[3])
    );
    array #(
        .width  (s_tag),
        .s_index(s_index)
    ) tagA (
        .clk((clk)),
        .write_en((tag_ld[3])),
        .rindex((index)),
        .windex((index)),
        .datain((address_tag)),
        .dataout((tag_out[3]))
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) validA (
        .clk(clk),
        .write_en(valid_ld[3]),
        .rindex(index),
        .windex(index),
        .datain(1'b1),
        .dataout(valid_out[3]),
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) dirtyA (
        .clk(clk),
        .write_en(dirty_ld[3]),
        .rindex(index),
        .windex(index),
        .datain(dirty_i[3]),
        .dataout(dirty_o[3]),
    );

    data_array #(
        .s_offset(s_offset),
        .s_index (s_index)
    ) wayB (
        .clk(clk),
        .write_en(mask[2]),
        .rindex(index),
        .windex(index),
        .datain(line_in[2]),
        .dataout(line_out[2])
    );
    array #(
        .width  (s_tag),
        .s_index(s_index)
    ) tagB (
        .clk(clk),
        .write_en(tag_ld[2]),
        .rindex(index),
        .windex(index),
        .datain(address_tag),
        .dataout(tag_out[2])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) validB (
        .clk(clk),
        .write_en(valid_ld[2]),
        .rindex(index),
        .windex(index),
        .datain(1'b1),
        .dataout(valid_out[2])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) dirtyB (
        .clk(clk),
        .write_en(dirty_ld[2]),
        .rindex(index),
        .windex(index),
        .datain(dirty_i[2]),
        .dataout(dirty_o[2])
    );

    data_array #(
        .s_offset(s_offset),
        .s_index (s_index)
    ) wayC (
        .clk(clk),
        .write_en(mask[1]),
        .rindex(index),
        .windex(index),
        .datain(line_in[1]),
        .dataout(line_out[1])
    );
    array #(
        .width  (s_tag),
        .s_index(s_index)
    ) tagC (
        .clk(clk),
        .write_en(tag_ld[1]),
        .rindex(index),
        .windex(index),
        .datain(address_tag),
        .dataout(tag_out[1])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) validC (
        .clk(clk),
        .write_en(valid_ld[1]),
        .rindex(index),
        .windex(index),
        .datain(1'b1),
        .dataout(valid_out[1])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) dirtyC (
        .clk(clk),
        .write_en(dirty_ld[1]),
        .rindex(index),
        .windex(index),
        .datain(dirty_i[1]),
        .dataout(dirty_o[1])
    );

    data_array #(
        .s_offset(s_offset),
        .s_index (s_index)
    ) wayD (
        .clk(clk),
        .write_en(mask[0]),
        .rindex(index),
        .windex(index),
        .datain(line_in[0]),
        .dataout(line_out[0])
    );
    array #(
        .width  (s_tag),
        .s_index(s_index)
    ) tagD (
        .clk(clk),
        .write_en(tag_ld[0]),
        .rindex(index),
        .windex(index),
        .datain(address_tag),
        .dataout(tag_out[0])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) validD (
        .clk(clk),
        .write_en(valid_ld[0]),
        .rindex(index),
        .windex(index),
        .datain(1'b1),
        .dataout(valid_out[0])
    );
    array #(
        .width  (1),
        .s_index(s_index)
    ) dirtyD (
        .clk(clk),
        .write_en(dirty_ld[0]),
        .rindex(index),
        .windex(index),
        .datain(dirty_i[0]),
        .dataout(dirty_o[0])
    );
    //endregion

endmodule : cache_datapath
