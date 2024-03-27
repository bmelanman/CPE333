//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        
        ////////////////////////////////////////////////////////////////////////////////
        // Company: Cal Poly
        // Engineer: Paul Hummel
        //
        // Create Date: 06/27/2018 02:41:23 AM
        // Design Name: debounce_one_shot
        // Target Devices: Basys3
        // Description:
        // FSM-based debouncer with integrated one-shot output.
        // One-shot output directly follows successfull completion of debouncing
        // the rising edge and then the falling edged of the input signal.
        // CLK should be 50 MHz RAT clock
        //
        // CONFIGURABLE PARAMETERS:
        // c_LOW_GOING_HIGH_CLOCKS = minimum # clocks for stable high input
        // c_HIGH_GOING_LOW_CLOCKS = minimum # clocks for stable low input
        // c_ONE_SHOT_CLOCKS = length of one shot output pulse in clk cycles
        //
        // Revision:
        // Revision 0.01 - Initial SystemVerilog version from Jeff Gerfen's VHDL
        ////////////////////////////////////////////////////////////////////////////////
        
        module debounce_one_shot (
 004999     input CLK,
%000000     input BTN,
%000000     output logic DB_BTN
        );
        
%000001     const logic [7:0] c_LOW_GOING_HIGH_CLOCKS = 8'h19;  // 25 clks
%000001     const logic [7:0] c_HIGH_GOING_LOW_CLOCKS = 8'h33;  // 50 clks
%000001     const logic [7:0] c_ONE_SHOT_CLOCKS = 8'h01;  // 3 clks
        
            typedef enum {
                ST_init,
                ST_BTN_low,
                ST_BTN_low_to_high,
                ST_BTN_high,
                ST_BTN_high_to_low,
                ST_one_shot
            } state_t;
        
            state_t NS, PS;
        
%000001     logic [7:0] s_db_count = 8'h00;
%000000     logic s_count_rst, s_count_inc;
        
            // Counter block to count the number of clock pulses when enabled  /////////
 002500     always_ff @(posedge CLK) begin
 002500         if (s_count_rst == 1'b1) s_db_count <= 8'h00;
%000000         else if (s_count_inc == 1'b1) s_db_count <= s_db_count + 1;
            end
            ////////////////////////////////////////////////////////////////////////////
        
            // FSM State Register //////////////////////////////////////////////////////
 002500     always_ff @(posedge CLK) begin
 002500         PS <= NS;
            end
            ////////////////////////////////////////////////////////////////////////////
        
            // FSM Logic //////////////////////////////////////////////////////////////
%000001     always_comb begin
                // assign default values to avoid latches
%000001         NS = ST_init;
%000001         DB_BTN = 1'b0;
%000001         s_count_rst = 1'b0;
%000001         s_count_inc = 1'b0;
        
%000001         case (PS)
%000001             ST_init: begin  // initialize FSM
%000001                 NS = ST_BTN_low;
%000001                 DB_BTN = 1'b0;
%000001                 s_count_rst = 1'b1;
                    end
        
 002500             ST_BTN_low: begin  // waiting for button press
 002500                 if (BTN == 1'b1) begin  // press detected
%000000                     NS          = ST_BTN_low_to_high;
%000000                     s_count_inc = 1'b1;  // start counting
 002500                 end else begin
 002500                     NS          = ST_BTN_low;  // nothing detected
 002500                     s_count_rst = 1'b1;
                        end
                    end
        
%000000             ST_BTN_low_to_high: begin  // waiting for high bounce to settle
%000000                 if (BTN == 1'b1) begin  // button is still high
                            // button stayed high for specified time
%000000                     if (s_db_count == c_LOW_GOING_HIGH_CLOCKS) begin
%000000                         NS = ST_BTN_high;
%000000                         s_count_rst = 1'b1;
%000000                     end else begin  // keep counting
%000000                         NS = ST_BTN_low_to_high;
%000000                         s_count_inc = 1'b1;
                            end
%000000                 end else begin  // button low, so still bouncing
%000000                     NS = ST_BTN_low;
%000000                     s_count_rst = 1'b1;
                        end
                    end
        
%000000             ST_BTN_high: begin  // waiting for button release
%000000                 if (BTN == 1'b1) begin
%000000                     NS = ST_BTN_high;
%000000                     s_count_rst = 1'b1;
%000000                 end else begin  // button released
%000000                     NS = ST_BTN_high_to_low;
%000000                     s_count_inc = 1'b1;
                        end
                    end
        
%000000             ST_BTN_high_to_low: begin
%000000                 if (BTN == 1'b0) begin  // button still low
                            // button stayed low for specified time
%000000                     if (s_db_count == c_HIGH_GOING_LOW_CLOCKS) begin
%000000                         NS = ST_one_shot;
%000000                         s_count_rst = 1'b1;
%000000                     end else begin  // keep counting
%000000                         NS = ST_BTN_high_to_low;
%000000                         s_count_inc = 1'b1;
                            end
%000000                 end else begin  // button high, so still bouncing
%000000                     NS = ST_BTN_high;
%000000                     s_count_rst = 1'b1;
                        end
                    end
        
%000000             ST_one_shot: begin  // button press complete, create a single pulse
                        // one shot pulse has been high for specified time
%000000                 if (s_db_count == c_ONE_SHOT_CLOCKS) begin
%000000                     NS = ST_init;
%000000                     s_count_rst = 1'b1;
%000000                     DB_BTN = 1'b0;
%000000                 end else begin  // keep counting
%000000                     NS = ST_one_shot;
%000000                     s_count_inc = 1'b1;
%000000                     DB_BTN = 1'b1;
                        end
                    end
        
%000000             default: begin  // failsafe
%000000                 NS = ST_init;
%000000                 s_count_rst = 1'b1;
%000000                 s_count_inc = 1'b0;
%000000                 DB_BTN = 1'b0;
                    end
                endcase
            end
            ////////////////////////////////////////////////////////////////////////////
        
        endmodule
        
