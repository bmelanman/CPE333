#include <VOTTER_Wrapper.h>
#include <stdlib.h>
#include <verilated.h>
#include <verilated_vcd_c.h>
//#include <verilated_fst_c.h>

#include <iostream>

#define MAX_SIM_TIME 100000000

vluint64_t sim_time = 0;

int main( int argc, char** argv, char** env )
{
    Verilated::commandArgs( argc, argv );
    VOTTER_Wrapper* DUT = new VOTTER_Wrapper;

    Verilated::traceEverOn( true );
    VerilatedVcdC* m_trace = new VerilatedVcdC;
    //VerilatedFstC* m_trace = new VerilatedFstC;

    // depth limit for trace, e.g. 5 levels down from top level module
    DUT->trace( m_trace, 5 );
    m_trace->open( "waveform.vcd" );
    //m_trace->open( "waveform.fst" );

    while ( sim_time < MAX_SIM_TIME )
    {
        DUT->CLK ^= 1;
        DUT->eval();
        m_trace->dump( sim_time );
        sim_time++;
    }

    m_trace->close();

    Verilated::mkdir( "logs" );
    Verilated::threadContextp()->coveragep()->write( "logs/coverage.dat" );

    delete DUT;
    exit( EXIT_SUCCESS );
}