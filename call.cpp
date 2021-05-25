#include "call.h"

//Save stack pointer of current frame
//Jump to location of function being called at top of runtime stack
void call::execute() {
    ++fpsp;
    fpstack.push_back(sp - rstack[sp] - 1);
    sp--;
    pc = rstack[sp--];
    rstack.pop_back();
    rstack.pop_back();
}