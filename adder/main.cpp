#include <systemc.h>
#include "adder4.h"
#include "testbench.h"
#include "monitor.h"

int sc_main(int argc, char* argv[])
{
    sc_set_time_resolution(1, SC_NS);

    sc_signal<sc_uint<4>> A,B,OUT;
    
    adder4 uut("adder");
    testbench tb("tester");
    monitor mon("monitor");

    uut.A(A);
    uut.B(B);
    uut.OUT(OUT);

    tb.A(A);
    tb.B(B);

    mon.OUT(OUT);

    // Creating a trace file
    sc_trace_file *tf;
    tf = sc_create_vcd_trace_file("trace");
    sc_trace(tf, A, "A");
    sc_trace(tf, B, "B");
    sc_trace(tf, OUT, "OUT");

    // Running the simulation
    sc_start(20, SC_NS);
    sc_close_vcd_trace_file(tf);

    return (0);
}
