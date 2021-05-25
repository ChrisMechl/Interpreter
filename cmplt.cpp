#include "cmplt.h"

//Compares less than for top two operands in stack
void cmplt::execute() {
    rstack[sp-1] = rstack[sp-1] < rstack[sp];
    rstack.pop_back();
    sp--;
    pc++;
}