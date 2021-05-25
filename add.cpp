#include "add.h"
#include <iostream>

//Adds top two operands on stack and places result on top of stack
void add::execute(){
    rstack[sp - 1] = rstack[sp - 1] + rstack[sp];
    sp--;
    rstack.pop_back();
    pc++;
};