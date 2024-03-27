import mult_types_pkg::*;

module add_shift_multiplier (
    input  logic     clk_i,
    input  logic     reset_n_i,
    input  operand_t multiplicand_i,
    input  operand_t multiplier_i,
    input  logic     start_i,
    output logic     ready_o,
    output result_t  product_o,
    output logic     done_o
);

    mult_state_t ms;
    mult_state_t ms_reset;
    mult_state_t ms_init;
    mult_state_t ms_add;
    mult_state_t ms_shift;
    logic update_state;

    assign ready_o = ms.ready;
    assign done_o = ms.done;
    assign product_o = {ms.A, ms.Q};


    /******************************** Monitors ***********************************/
    //initial $monitor($time, " DUT: ready_o: %1b", ready_o);
    //initial $monitor($time, " DUT: reset_n_i: %1b", reset_n_i);
    //initial $monitor($time, " DUT: state: %s", ms.op.name);
    //initial $monitor($time, " DUT: clk: %1b, reset_n_i %1b, state: %s, rdy: %1b",
    //clk_i, reset_n_i, ms.op.name, ready_o);
    /*****************************************************************************/

    // Describes reset state
    function static void reset(output mult_state_t ms_next);
        ms_next = 0;
        ms_next.ready = 1'b1;
    endfunction

    // Describes multiplication initialization state
    function static void init(input logic [width_p-1:0] multiplicand, input logic [width_p-1:0] multiplier,
                              output mult_state_t ms_next);
        ms_next.ready = 1'b0;
        ms_next.done = 1'b0;
        ms_next.iteration = 0;
        ms_next.op = OP_ADD;

        ms_next.M = multiplicand;
        ms_next.C = 1'b0;
        ms_next.A = 0;
        ms_next.Q = multiplier;
    endfunction

    // Describes state after add occurs
    function static void add(input mult_state_t cur, output mult_state_t next);
        next = cur;
        next.op = OP_SHIFT;
        if (cur.Q[0]) {next.C, next.A} = cur.A + cur.M;
        else next.C = 1'b0;
    endfunction

    // Describes state after shift occurs
    function static void shift(input mult_state_t cur, output mult_state_t next);
        next = cur;
        {next.A, next.Q} = {cur.C, cur.A, cur.Q[width_p-1:1]};
        next.op = OP_ADD;
        next.iteration += 1;
        if (next.iteration == width_p) begin
            next.op = OP_DONE;
            next.done = 1'b1;
            next.ready = 1'b1;
        end
    endfunction
    /*****************************************************************************/

    always_comb begin
        update_state = 1'b0;
        if ((~reset_n_i) | (start_i) | (ms.op == OP_ADD) || (ms.op == OP_SHIFT)) update_state = 1'b1;
        reset(ms_reset);
        init(multiplicand_i, multiplier_i, ms_init);
        add(ms, ms_add);
        shift(ms, ms_shift);
    end

    always_ff @(posedge clk_i) begin
        if (~reset_n_i) ms <= ms_reset;
        else if (update_state) begin
            if (start_i & ready_o) begin
                ms <= ms_init;
            end else begin
                case (ms.op)
                    OP_ADD:   ms <= ms_add;
                    OP_SHIFT: ms <= ms_shift;
                    default:  ms <= ms_reset;
                endcase
            end
        end
    end

endmodule : add_shift_multiplier

