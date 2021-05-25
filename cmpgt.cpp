#include "cmpgt.h"

//Compares greater than for top two operands in stack
void cmpgt::execute() {
    rstack[sp-1] = rstack[sp-1] > rstack[sp];
    rstack.pop_back();
    sp--;
    pc++;
}