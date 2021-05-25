#include "cmpe.h"

//Compares equal for top two operands of stack
void cmpe::execute() {
    rstack[sp-1] = rstack[sp-1] == rstack[sp];
    rstack.pop_back();
    sp--;
    pc++;
}