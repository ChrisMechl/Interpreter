#include "peeki.h"

//Takes the int at the offset (from runtime stack) and places it in the variable next to the top of the runtime stack
void peeki::execute(){
    int tmp = fpstack[fpsp] + rstack[sp-1] + 1;
    rstack[fpstack[fpsp] + rstack[sp - 1] + 1] = rstack[fpstack[fpsp] + rstack[sp] + 1];

    for (int s = tmp; s < (sp-1); s++) {
        rstack.pop_back();
    }

    sp = rstack.size() - 1;
    pc++;
};