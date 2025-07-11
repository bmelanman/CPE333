`ifndef CAM_TR_MONITOR_SV
`define CAM_TR_MONITOR_SV

`include "../cam_types_pkg.sv"
`include "grader_types_pkg.sv"
import cam_types_pkg::*;
import grader_types_pkg::*;

module transaction_monitor (
    cam_if itf,
    grader_if gitf
);

    default clocking mon_clk @(posedge gitf.monclk);
    endclocking

    task automatic send_tr(trans_e tre);
        trans_t tr;
        tr.ltime = itf.timestamp;
        tr.rtime = $time;
        tr.key = itf.key;
        tr.rdata = itf.val_o;
        tr.wdata = itf.val_i;
        tr.valid_o = itf.valid_o;
        tr.tr_type = tre;
        gitf.transbox.put(tr);
    endtask

    initial
        forever begin
            @(mon_clk);
            if (!itf.reset_n) begin
                send_tr(TR_RESET);
            end else if (itf.valid_i) begin
                if (itf.rw_n) begin
                    send_tr(TR_READ);
                end else begin
                    send_tr(TR_WRITE);
                end
            end
        end

endmodule

`endif  /* CAM_TR_MONITOR_SV */
