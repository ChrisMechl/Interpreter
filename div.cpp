#include "div.h"
#include <iostream>

//Divides top two operands of the stack
void div::execute(){
    rstack[sp - 1] = rstack[sp - 1] / rstack[sp];
    sp--;
    rstack.pop_back();
    pc++;
};