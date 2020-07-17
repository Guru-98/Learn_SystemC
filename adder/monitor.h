#include <systemc.h>

SC_MODULE(monitor){
    sc_in<sc_uint<4>> OUT;

    void print();

    SC_CTOR(monitor){
        SC_METHOD(print);
        dont_initialize();
        sensitive<<OUT;
    }
};