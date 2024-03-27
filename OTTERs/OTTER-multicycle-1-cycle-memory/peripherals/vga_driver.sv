`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Cal Poly
// Engineer: Paul Hummel
//
// Create Date: 06/07/2018 06:00:59 PM
// Design Name:
// Module Name: vga_driver
// Project Name: VGA 40x30
// Target Devices: RAT MCU on Basys3
// Description: VGA signal driver. Reads 8-bit RGB data and outputs appropriate
//              VGA signals (Rout, Gout, Bout) includeing horizontal and
//              vertical sync. Ideal clock input signal is 25.175 MHz, but can
//              work with 25 MHz clock input. The driver communicates with the
//              ram2k_8 framebuffer memory to read RGB data by location using
//              row and column outputs. The row and column will combine to form
//              the address of the ram2k_8 framebuffer. For VGA, the column
//              values that are valid are from 0 to 639, all other values
//              should be ignored.  The row values that are valid are from
//              0 to 479 and all other values are ignored.  To turn on a pixel
//              on the VGA monitor, some combination of red, green and blue
//              should be asserted before the rising edge of the clock.
//              Objects which are displayed on the monitor, assert their
//              combination of red, green and blue when they detect the row and
//              column values are within their range.  For multiple objects
//              sharing a screen, they must be combined using logic to create
//              single red, green, and blue signals.
//
// Revision:
// Revision 0.01 - File Created
//////////////////////////////////////////////////////////////////////////////////


module vga_driver (
    input              CLK,     // 25 MHz
    input        [2:0] RED,
    input        [2:0] GREEN,
    input        [1:0] BLUE,
    output logic [9:0] ROW,     // current pixel being displayed
    output logic [9:0] COLUMN,
    output logic [2:0] ROUT,
    output logic [2:0] GOUT,
    output logic [1:0] BOUT,
    output logic       HSYNC,   // horizontal and vertical sync signals
    output logic       VSYNC
);

    const logic [9:0] c_B = 93;  // horizontal blank: 3.77 us
    const logic [9:0] c_C = 45;  // front guard: 1.89 us
    const logic [9:0] c_D = 640;  // horizontal columns: 25.17 us
    const logic [9:0] c_E = 22;  // rear guard: 0.94 us
    const logic [9:0] c_A = c_B + c_C + c_D + c_E;  // one horizontal sync cycle: 31.77 us
    const logic [9:0] c_P = 2;  // vertical blank: 64 us
    const logic [9:0] c_Q = 32;  // front guard: 1.02 ms
    const logic [9:0] c_R = 480;  // vertical rows: 15.25 ms
    const logic [9:0] c_S = 11;  // rear guard: 0.35 ms
    const logic [9:0] c_O = c_P + c_Q + c_R + c_S;  // one vertical sync cycle: 16.6 ms

    logic       [9:0] horizontal = '0;
    logic       [9:0] vertical = '0;

    always_ff @(posedge CLK) begin

        // update counters
        if (horizontal < (c_A - 1)) horizontal <= horizontal + 1;
        else begin
            horizontal <= '0;

            // less than c_O (oh)
            if (vertical < (c_O - 1)) vertical <= vertical + 1;
            else vertical <= '0;  // is set to zero
        end

        // define horizontal sync pulse
        if ((horizontal >= (c_D + c_E)) && (horizontal < (c_D + c_E + c_B))) HSYNC <= 1'b0;
        else HSYNC <= 1'b1;

        // define vertical sync pulse
        if ((vertical >= (c_R + c_S)) && (vertical < (c_R + c_S + c_P))) VSYNC <= 1'b0;
        else VSYNC <= 1'b1;

        // if in valid range displayed on screen, output pixel color data
        if ((vertical <= 479) && (horizontal <= 639)) begin
            ROUT <= RED;
            GOUT <= GREEN;
            BOUT <= BLUE;
        end else begin
            ROUT <= 3'b000;
            GOUT <= 3'b000;
            BOUT <= 2'b00;
        end

        ROW <= vertical;
        COLUMN <= horizontal;

    end

endmodule
