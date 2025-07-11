`ifndef TR_MONITOR
`define TR_MONITOR 1

import mult_types_pkg::*;
import grader_types_pkg::*;

module transaction_monitor (
    grader_if.TrMon itf,
    multiplier_if   mitf
);

    default clocking mon_clk @(negedge itf.monclk);
    endclocking
    initial
        forever begin
            automatic trans_t tr;
            operand_t op1, op2;
            @(mon_clk);
            if (!mitf.reset_n) begin  // Send RESET transaction
                $display("MON: Reset detected at time %0t with", $time, " multiplier in state: %s", mitf.mult_op.name);
                tr.tr_time = itf.timestamp;
                tr.tr_type = RESET;
                tr.op1 = 0;
                tr.op2 = 0;
                $display("MON: Reset sent at time %0t", $time);
                itf.transbox.put(tr);
            end else if (mitf.start) begin  // Send MULT_START transaction
                // $display("MON: Start detected at time %0t with", $time,
                //        " multiplier state: %s", mitf.mult_op.name);
                tr.tr_time = itf.timestamp;
                tr.tr_type = MULT_START;
                tr.op1 = mitf.multiplicand;
                tr.op2 = mitf.multiplier;
                $display("MON: Start sent at time %0t", $time);
                itf.transbox.put(tr);
            end
        end

endmodule : transaction_monitor

`endif  /* TR_MONITOR */
