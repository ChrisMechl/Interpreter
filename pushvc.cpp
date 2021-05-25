#include "pushvc.h"

void pushvc::execute() {
    rstack[sp] = rstack[fpstack[fpsp]+rstack[sp]+1];
    pc++;

}