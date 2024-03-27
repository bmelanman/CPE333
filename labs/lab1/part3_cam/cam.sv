`ifndef CAM_SV
`define CAM_SV

import cam_types_pkg::*;

module cam (
    input        clk_i,
    input        reset_n_i,
    input        rw_n_i,
    input        valid_i,
    input  key_t key_i,
    input  val_t val_i,
    output val_t val_o,
    output logic valid_o
);

    // This is an interface.  See `cam_interface.sv`
    cam_if ctls ();

    cam_datapath dp (.*);

    logic read_i, write_i;
    assign read_i  = (valid_i & rw_n_i);
    assign write_i = (valid_i & (~rw_n_i));

    cam_controller ctl (.*);

endmodule : cam

`endif  /* CAM_SV */
