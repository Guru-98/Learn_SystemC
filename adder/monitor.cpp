#include "monitor.h"

void monitor::print(){
    std::cout<<"@ "<<sc_time_stamp()<<" OUT: "<<OUT.read()<<std::endl;
}