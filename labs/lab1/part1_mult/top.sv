
`include "mult_types_pkg.sv"
import mult_types_pkg::*;

module top;
    multiplier_if itf ();
    mult_tb tb (.*);
    grader grd (.*);
endmodule
