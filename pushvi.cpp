#include "pushvi.h"

void pushvi::execute() {
    rstack[sp] = rstack[fpstack[fpsp]+rstack[sp]+1];
    pc++;
}