#include <systemc.h>

SC_MODULE(testbench){
    sc_out<sc_uint<4>> A,B;

    void simulate();

    SC_CTOR(testbench){
        SC_THREAD(simulate);
    }
};