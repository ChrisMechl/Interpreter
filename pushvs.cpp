#include "pushvs.h"

void pushvs::execute() {
    rstack[sp] = rstack[fpstack[fpsp] + rstack[sp] + 1];
    pc++;
}