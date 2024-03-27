`ifndef GRADER_TYPES_PKG_SVH
`define GRADER_TYPES_PKG_SVH 1

`include "mult_types_pkg.sv"

package grader_types_pkg;

    import mult_types_pkg::*;

    typedef struct packed {
        logic reset_n;
        logic [width_p-1:0] multiplicand;
        logic [width_p-1:0] multiplier;
        logic start;
        logic ready;
        logic [width_p*2-1:0] product;
        logic done;
    } sample_t;

    typedef struct packed {
        logic [operand_limit-1:0][operand_limit-1:0] mults;
        logic reset_add;
        logic reset_shift;
        logic start_add;
        logic start_shift;
    } covers_t;

    // Represents Transaction Types
    typedef enum {
        MULT_START,
        RESET
    } trans_e;

    // Transaction Data Structure
    typedef struct {
        time    tr_time;  // The time the transaction is id'ed
        trans_e tr_type;
        int     op1;      // Multiplicand and multiplier
        int     op2;
    } trans_t;

    typedef enum {
        ERR_NONE = 0,
        ERR_ILLEGAL_TRANSACTION = 1,
        ERR_TIME_DESYNC = 2,
        ERR_ILLEGAL_STATE = 3
    } errnos_e;

endpackage : grader_types_pkg

`endif  /* GRADER_TYPES_PKG_SVH */
