`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////
// Engineer: Bryce Melander
//
// Module Name: OTTER_REF_CU_FSM
// Target Devices: Basys3
// Description: A description of the module's purpose.
//
//////////////////////////////////////////////////////////////////////////////

typedef enum logic [6:0] {
    R_TYPE = 7'b0110011,
    I_TYPE = 7'b0010011,
    S_TYPE = 7'b0100011,
    B_TYPE = 7'b1100011,
    JALR   = 7'b1100111,
    JAL    = 7'b1101111,
    MEM_LD = 7'b0000011,
    LUI_CP = 7'b0110111,
    AUI_PC = 7'b0010111
} opcode_t;

module OTTER_REF_CU_FSM (
    input CLK,
    input RST,
    input [31:0] IR,
    input INTR_EN,
    output SYS_RST = 0,
    output PC_WRITE = 0,
    output REG_WRITE = 0,
    output CSR_WRITE = 0,
    output MEM_RD1_EN = 0,
    output MEM_RD2_EN = 0,
    output MEM_WR2_EN = 0,
    output INT_TAKEN = 0,
    output MRET_EXEC = 0
);

    bit HIGH = 1, LOW = 0;

    typedef enum {
        INIT,
        FETCH,
        EXEC,
        WR_BK
    } fsm_state_t;

    fsm_state_t PS, NS = INIT;

    opcode_t opcode;
    logic [2:0] func3;

    assign opcode = opcode_t'(IR[6:0]);
    assign func3  = IR[14:12];

    always_ff @(posedge CLK) begin

        // Next state
        PS <= NS;

        // Synchronous reset
        if (RST == 1) begin
            PS <= INIT;
        end

        // Reset outputs to 0
        SYS_RST   <= LOW;
        CSR_WRITE    <= LOW;
        MRET_EXEC <= LOW;
        INT_TAKEN <= LOW;
        PC_WRITE  <= LOW;
        REG_WRITE <= LOW;
        MEM_WR2_EN   <= LOW;
        MEM_RD1_EN <= LOW;
        MEM_RD2_EN <= LOW;

        case (PS)
            INIT: begin
                SYS_RST <= HIGH;
                NS <= FETCH;
            end

            FETCH: begin
                MEM_RD1_EN <= HIGH;
                NS <= EXEC;
            end

            EXEC: begin
                case (opcode)
                    R_TYPE, I_TYPE, JALR, JAL, LUI_CP, AUI_PC: begin
                        PC_WRITE  <= HIGH;
                        REG_WRITE <= HIGH;
                    end
                    S_TYPE: begin
                        PC_WRITE   <= HIGH;
                        MEM_WR2_EN <= HIGH;
                    end
                    B_TYPE: begin
                        PC_WRITE <= HIGH;
                    end
                    MEM_LD: begin
                        MEM_RD2_EN <= HIGH;
                    end
                    default: begin
                        // Do nothing
                    end
                endcase

                if (MEM_RD2_EN == HIGH) NS <= WR_BK;
                else NS <= FETCH;
            end

            WR_BK: begin
                PC_WRITE <= HIGH;
                REG_WRITE <= HIGH;
                NS <= FETCH;
            end

            default: begin
                NS <= INIT;
            end
        endcase
    end

endmodule

// End of File //
