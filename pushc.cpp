#include "pushc.h"

void pushc::execute() {
    rstack.push_back(mem[pc+1]);
    sp++;
    pc += 2;
}