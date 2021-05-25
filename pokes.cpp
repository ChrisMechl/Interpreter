#include "pokes.h"

//Change the short value at the offset to the variable at the next to the top of the runtime stack
void pokes::execute(){
    rstack[fpstack[fpsp] + rstack[sp] + 1] = rstack[fpstack[fpsp] + rstack[sp - 1] + 1];
    pc++;
};