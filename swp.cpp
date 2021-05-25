#include "swp.h"

void swp::execute(){
    int temp = rstack[sp - 1];
    rstack[sp - 1] = rstack[sp];
    rstack[sp] = temp;
    pc++;
};