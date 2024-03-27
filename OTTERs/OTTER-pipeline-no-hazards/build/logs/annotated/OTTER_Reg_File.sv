//      // verilator_coverage annotation
        `timescale 1ns / 1ps
        //////////////////////////////////////////////////////////////////////////////////
        // Company:
        // Engineer:  J. Callenes
        //
        // Create Date: 01/05/2019 12:17:57 AM
        // Design Name:
        // Module Name: registerFile
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
        
        module OTTER_Reg_File (
 004999     input               CLK,
 000010     input               WR_EN,
%000002     input        [ 4:0] WR_ADDR,
%000000     input        [31:0] WR_DATA,
%000000     input        [ 4:0] ADDR1,
%000006     input        [ 4:0] ADDR2,
%000000     output logic [31:0] RS1,
%000000     output logic [31:0] RS2
        );
        
            // 32 registers with a width of 32 bits, all initialized to 32'b0
%000001     reg [31:0] registers[31] = '{default: '0};
        
            // Async. read from registers
            assign RS1 = registers[ADDR1];
            assign RS2 = registers[ADDR2];
        
            // Sync. write to registers (don't write to x0)
 002500     always_ff @(posedge CLK) begin
 002500         registers[WR_ADDR] <= (WR_ADDR != 0 ? WR_DATA : 0);
            end
        endmodule
        
        
