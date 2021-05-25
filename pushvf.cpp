#include "pushvf.h"

void pushvf::execute() {
    rstack[sp] = rstack[fpstack[fpsp] + rstack[sp]+1];
    pc++;
}