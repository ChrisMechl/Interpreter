#include "pokef.h"

//Change the float value at the offset to the variable at the next to the top of the runtime stack
void pokef::execute(){
    rstack[fpstack[fpsp] + rstack[sp] + 1] = rstack[fpstack[fpsp] + rstack[sp - 1] + 1];
    pc++;
};