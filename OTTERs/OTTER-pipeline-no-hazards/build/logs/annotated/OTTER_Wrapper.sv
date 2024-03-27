//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company:
        // Engineer: J. Calllenes
        //           P. Hummel
        //
        // Create Date: 01/20/2019 10:36:50 AM
        // Design Name:
        // Module Name: OTTER_Wrapper
        // Project Name:
        // Target Devices:
        // Tool Versions:
        // Description:
        //
        // Dependencies:
        //
        // Revision:
        // Revision 0.01 - File Created
        // Additional Comments:
        //
        //////////////////////////////////////////////////////////////////////////////////
        
        module OTTER_Wrapper (
 010000     input CLK,
%000000     input BTNL,
%000000     input BTNC,
%000000     input [15:0] SWITCHES,
%000000     input PS2Clk,
%000000     input PS2Data,
%000000     output logic [15:0] LEDS,
%000000     output [7:0] CATHODES,
%000000     output [3:0] ANODES,
%000000     output [7:0] VGA_RGB,
%000000     output VGA_HS,
%000000     output VGA_VS,
%000000     output Tx
        );
        
            // INPUT PORT IDS ////////////////////////////////////////////////////////
            localparam logic [31:0] SWITCHES_AD = 32'h11000000;
            localparam logic [31:0] VGA_READ_AD = 32'h11040000;
        
            // OUTPUT PORT IDS ///////////////////////////////////////////////////////
            localparam logic [31:0] LEDS_AD = 32'h11080000;
            localparam logic [31:0] SSEG_AD = 32'h110C0000;
            localparam logic [31:0] VGA_ADDR_AD = 32'h11100000;
            localparam logic [31:0] VGA_COLOR_AD = 32'h11140000;
            localparam logic [31:0] UART_DATA_AD = 32'h11180000;
            localparam logic [31:0] UART_RDY_AD = 32'h111C0000;
            localparam logic [31:0] KEYBOARD_AD = 32'h11200000;
        
            // Signals for connecting OTTER_MCU to OTTER_wrapper /////////////////////////
%000001     logic s_clk = 1'b0;
%000000     logic s_reset, s_load;
%000000     logic s_interrupt, keyboard_int, btn_int;
        
            // Signals for connecting VGA Framebuffer Driver
%000000     logic        r_vga_we;  // write enable
%000000     logic [12:0] r_vga_wa;  // address of framebuffer to read and write
%000000     logic [ 7:0] r_vga_wd;  // pixel color data to write to framebuffer
%000000     logic [ 7:0] r_vga_rd;  // pixel color data read from framebuffer
        
%000000     logic [15:0] r_SSEG;  // = 16'h0000;
%000000     logic uart_start, uart_ready;
%000001     logic [7:0] uart_data = 0;
%000000     logic [7:0] s_scancode;
        
%000000     logic [31:0] IOBUS_out, IOBUS_in, IOBUS_addr;
%000000     logic IOBUS_wr;
        
            assign s_interrupt = (keyboard_int | btn_int);
        
            // Declare OTTER_CPU ///////////////////////////////////////////////////////
            OTTER_MCU_pipeline_no_hazards MCU (
                .RESET(s_reset),
                .INTR(s_interrupt),
                .CLK(s_clk),
                .IOBUS_OUT(IOBUS_out),
                .IOBUS_IN(IOBUS_in),
                .IOBUS_ADDR(IOBUS_addr),
                .IOBUS_WR(IOBUS_wr)
            );
        
            // Declare Seven Segment Display /////////////////////////////////////////
            SevSegDisp SSG_DISP (
                .DATA_IN(r_SSEG),
                .CLK(CLK),
                .MODE(1'b0),
                .CATHODES(CATHODES),
                .ANODES(ANODES)
            );
        
            // Declare Debouncer One Shot  ///////////////////////////////////////////
            debounce_one_shot DB (
                .CLK(s_clk),
                .BTN(),
                .DB_BTN(btn_int)
            );
        
        
            //wire vgaCLK;
            //clk_wiz_1  pll(.clk_out1(vgaCLK), .reset(s_reset),.locked(),.clk_in1(CLK));
        
            //// Declare VGA Frame Buffer //////////////////////////////////////////////
            //vga_fb_driver VGA (
            //    .CLK (s_clk),
            //    .WA  (r_vga_wa),
            //    .WD  (r_vga_wd),
            //    .WE  (r_vga_we),
            //    .RD  (r_vga_rd),
            //    .ROUT(VGA_RGB[7:5]),
            //    .GOUT(VGA_RGB[4:2]),
            //    .BOUT(VGA_RGB[1:0]),
            //    .HS  (VGA_HS),
            //    .VS  (VGA_VS)
            //);  //.clk_vga(vgaCLK));
        
            //// Declare UART Driver Module ////////////////////////////////////////////
            //UART uart_driver (
            //    .CLK(CLK),
            //    .RST(s_reset),
            //    .start(uart_start),
            //    .data(uart_data),
            //    .Tx(Tx),
            //    .ready(uart_ready)
            //);
        
            //// Declare Keyboard Driver //////////////////////////////////////////////
            //KeyboardDriver KEYBD (
            //    .CLK(CLK),
            //    .PS2DATA(PS2Data),
            //    .PS2CLK(PS2Clk),
            //    .INTRPT(keyboard_int),
            //    .SCANCODE(s_scancode)
            //);
        
            // Clock Divider to create 50 MHz Clock /////////////////////////////////
 004999     always_ff @(posedge CLK) begin
 004999         s_clk <= ~s_clk;
            end
        
            //clk_div clkDIv(CLK, s_clk);
            //assign s_clk =CLK;
            // Connect Signals ////////////////////////////////////////////////////////////
            assign s_reset = BTNC;
        
            //assign LEDS[15]=keyboard_int;
            // Connect Board peripherals (Memory Mapped IO devices) to IOBUS /////////////////////////////////////////
 002500     always_ff @(posedge s_clk) begin
 002500         r_vga_we   <= 0;
 002500         uart_start <= 1'h0;
%000000         if (IOBUS_wr)
%000000             case (IOBUS_addr)
%000000                 LEDS_AD:     LEDS <= IOBUS_out[15:0];
%000000                 SSEG_AD:     r_SSEG <= IOBUS_out[15:0];
%000000                 VGA_ADDR_AD: r_vga_wa <= IOBUS_out[12:0];
%000000                 VGA_COLOR_AD: begin
%000000                     r_vga_wd <= IOBUS_out[7:0];
%000000                     r_vga_we <= 1;
                        end
%000000                 UART_DATA_AD: begin
%000000                     uart_data  <= IOBUS_out[7:0];
%000000                     uart_start <= 1;
                        end
%000000                 default:     ;
                    endcase
                //if(keyboard_int)
                //r_SSEG <= {8'b0,s_scancode};
            end
        
%000001     always_comb begin
%000001         IOBUS_in = 32'b0;
%000001         case (IOBUS_addr)
%000000             SWITCHES_AD: IOBUS_in[15:0] = SWITCHES;
%000000             VGA_READ_AD: IOBUS_in[15:0] = {8'b0, r_vga_rd};
%000000             UART_RDY_AD: IOBUS_in[0] = uart_ready;
%000000             KEYBOARD_AD: IOBUS_in[7:0] = s_scancode;
 002501             default: IOBUS_in = 32'b0;
                endcase
            end
        endmodule
        
        
