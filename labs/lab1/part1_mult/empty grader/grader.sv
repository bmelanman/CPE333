/*
 * Empty Grader module.  For developing and simulating your testbench w/o checker.
 */

`ifndef GRADER
`define GRADER

import grader_types_pkg::*;

module grader (
    multiplier_if itf
);

    initial begin
        $display("GDR: Grader Running");
        repeat (operand_limit * operand_limit * 100) @(posedge itf.clk);
        $display("GDR: Grader timed out");
        $finish;
    end

    final begin
        $display("GDR: Cleaning-up Test Run");
    end

endmodule : grader

`endif  /* GRADER */

