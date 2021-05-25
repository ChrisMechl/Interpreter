#include "mul.h"
#include <iostream>

//Multiplies two operands at top of the stack
void mul::execute(){
    rstack[sp - 1] = rstack[sp - 1] * rstack[sp];
    sp--;
    rstack.pop_back();
    pc++;
};