#include "testbench.h"

void testbench::simulate(){
    A = 0;
    B = 0;
    wait(5,SC_NS);
    A = 5;
    B = 0;
    wait(3,SC_NS);
    A = 5;
    B = 10;
    wait(7,SC_NS);
    A = 7;
    B = 8;
}