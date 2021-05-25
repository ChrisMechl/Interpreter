#include "jmpc.h"

void jmpc::execute() {
    if (rstack[sp-1] == 1) {
        pc = rstack[sp];
    }
    else {
        pc++;
    }
    sp = sp-2;
    rstack.pop_back();
    rstack.pop_back();
}