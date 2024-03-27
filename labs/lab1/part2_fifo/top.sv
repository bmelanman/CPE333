import fifo_types_pkg::*;

module top;
    fifo_if itf ();
    fifo_tb tb (.*);
    grader grd (.*);
endmodule : top

