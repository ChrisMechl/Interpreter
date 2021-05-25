#include "jmp.h"

//Jump to location at the top of the runtime stack
void jmp::execute() {
    pc = rstack[sp];
    rstack.pop_back();
    sp = sp-1;

}