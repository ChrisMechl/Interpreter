#include "sub.h"
#include <iostream>

void sub::execute(){
    rstack[sp - 1] = rstack[sp - 1] - rstack[sp];
    sp--;
    rstack.pop_back();
    pc++;
};