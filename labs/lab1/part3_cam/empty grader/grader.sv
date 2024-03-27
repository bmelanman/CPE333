`ifndef CAM_GRADER_SV
`define CAM_GRADER_SV

import cam_types_pkg::*;

module grader (
    cam_if itf
);

    initial begin
        $display("GDR: Grader Running");
        repeat (camsize_p * 10000) @(posedge itf.clk);
        $display("GDR: Timing Out");
        $finish;
    end

    final begin
        $display("GDR: Cleaning Up Grading Run...");
    end

endmodule : grader

`endif  /* CAM_GRADER_SV */
