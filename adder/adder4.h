#include <systemc.h>

SC_MODULE(adder4){
  sc_in<sc_uint<4>>		A,B;
  sc_out<sc_uint<4>>	OUT;
  
  sc_event ev;

  sc_uint<4> val_a,val_b,val_s;
  
  void add();
  void write();
  
  SC_CTOR(adder4){
    SC_METHOD(add);
    dont_initialize();
    sensitive<<A<<B;
    
    SC_METHOD(write);
    dont_initialize();
    sensitive<<ev;
  }
};