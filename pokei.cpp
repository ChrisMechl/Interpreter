#include "pokei.h"

//Change the int value at the offset to the variable at the next to the top of the runtime stack
void pokei::execute(){
    rstack[fpstack[fpsp] + rstack[sp] + 1] = rstack[fpstack[fpsp] + rstack[sp - 1] + 1];
    pc++;
};