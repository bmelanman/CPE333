`ifndef TRANSACTION_SCOREBOARD
`define TRANSACTION_SCOREBOARD 1

import fifo_types_pkg::*;
import grader_types_pkg::*;

module transaction_scoreboard (
    fifo_if   itf,
    grader_if gitf
);

    semaphore qlock = new(1);
    word_t queue[$:cap_p];

    task automatic report_dut_error(error_e err);
        $display("SCB: %0t: Reprting %s Error", $time, err.name);
        gitf.grd_report_dut_error(err, itf.timestamp);
    endtask

    // Test False Neg Errors
    //initial begin
    //    report_dut_error(INCORRECT_DATA_O_ON_YUMI_I);
    //    report_dut_error(RESET_DOES_NOT_CAUSE_READY_O);
    //end

    // Only call if you have possesion of qlock
    function automatic void do_enqueue(const ref trans_t tr);
        $display("SCB: %0t: %s Received.  Enqueining %0d", $time, tr.tr_type.name, tr.enq_word);
        queue.push_back(tr.enq_word);
    endfunction

    // Only call if you have possesion of qlock
    task automatic do_dequeue(const ref trans_t tr);
        $display("SCB: %0t: %s Received.  Dequeining (model) %0d.", $time, tr.tr_type.name, queue[0],
                 "  Dequeing (transaction) %0d", tr.deq_word);
        if (tr.deq_word != queue[0]) begin
            report_dut_error(INCORRECT_DATA_O_ON_YUMI_I);
        end
        queue.pop_front();
    endtask

    initial
        forever begin
            var automatic trans_t tr;
            var automatic int quesz;
            gitf.transbox.get(tr);

            fork
                qlock.get();
                quesz = queue.size();
                case (tr.tr_type)
                    TR_RESET: begin
                        $display("SCB: %0t: %s Receievd.", $time, tr.tr_type.name);
                        queue.delete();
                        qlock.put();
                        @(posedge gitf.scbclk);
                        assert (itf.rdy)
                        else begin
                            report_dut_error(RESET_DOES_NOT_CAUSE_READY_O);
                        end
                    end
                    TR_ENQUEUE: begin
                        do_enqueue(tr);
                        qlock.put();
                        if (quesz != cap_p) gitf.covers.enqs[quesz] = 1'b1;
                    end
                    TR_DEQUEUE: begin
                        do_dequeue(tr);
                        qlock.put();
                        gitf.covers.deqs[quesz] = 1'b1;
                    end
                    TR_BOTH: begin
                        do_dequeue(tr);
                        do_enqueue(tr);
                        qlock.put();
                        if ((quesz != 0) && (quesz != cap_p)) gitf.covers.boths[quesz] = 1'b1;
                    end
                    default: begin
                        $display("SCB: %0t: Unknown Transaction Type", $time);
                    end
                endcase
            join_none
        end

endmodule : transaction_scoreboard

`endif  /* TRANSACTION_SCOREBOARD */
