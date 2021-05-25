#include "ret.h"

void ret::execute() {
    sp = fpstack[fpsp--];
    pc = rstack[sp--];
    fpstack.pop_back();
    rstack.pop_back();
}