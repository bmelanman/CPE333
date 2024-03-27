`ifndef TRANSACTION_MONITOR
`define TRANSACTION_MONITOR 1

import fifo_types_pkg::*;
import grader_types_pkg::*;

module transaction_monitor (
    fifo_if   itf,
    grader_if gitf
);

    task send_tr(trans_e tr_op);
        automatic trans_t tr;
        tr.ltime = itf.timestamp;
        tr.rtime = $time;
        tr.tr_type = tr_op;
        tr.enq_word = itf.data_i;
        tr.deq_word = itf.data_o;
        gitf.transbox.put(tr);
        $display("MON: %0t: %s Tr Sent", $time, tr_op.name);
    endtask

    default clocking mon_clk @(negedge gitf.monclk);
    endclocking

    initial
        forever begin
            @(mon_clk iff (!itf.reset_n || itf.valid_i || itf.yumi));
            if (!itf.reset_n) begin
                $display("MON: %0t: Reset Detected", $time);
                send_tr(TR_RESET);
            end else begin
                unique case ({
                    itf.valid_i, itf.yumi
                })
                    2'b00: begin
                        $display("MON: %0t: Grader Error Detected %s %0d", $time, `__FILE__, `__LINE__);
                    end
                    2'b10: begin
                        $display("MON: %0t: Enqueue '%0d' Detected", $time, itf.data_i);
                        send_tr(TR_ENQUEUE);
                    end
                    2'b11: begin
                        $display("MON: %0t: Enqueue '%0d' Detected", $time, itf.data_i);
                        $display("MON: %0t: Dequeue '%0d' Detected", $time, itf.data_o);
                        send_tr(TR_BOTH);
                    end
                    2'b01: begin
                        $display("MON: %0t: Dequeue '%0d' Detected", $time, itf.data_o);
                        send_tr(TR_DEQUEUE);
                    end
                    default: begin
                        $display("MON: %0t: Grader Error Detected %s %0d", $time, `__FILE__, `__LINE__);
                    end
                endcase
            end
        end

endmodule : transaction_monitor

`endif  /* TRANSACTION_MONITOR */
