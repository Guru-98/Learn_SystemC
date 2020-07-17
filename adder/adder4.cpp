#include "adder4.h"
  
void adder4::add(){
  val_a = A.read();
  val_b = B.read();
  
  val_s = val_a + val_b;
  ev.notify(2,SC_NS);
}

void adder4::write(){
  OUT.write(val_s);
  ev.cancel();
}