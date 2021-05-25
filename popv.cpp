#include "popv.h"
#include <iostream>

void popv::execute(){
    rstack[fpstack[fpsp] + rstack[sp] + 1] = rstack[sp -1];
    sp -= 2;
    rstack.pop_back();
    rstack.pop_back();
    pc++;
};