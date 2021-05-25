#include "popa.h"
#include <iostream>

void popa::execute(){
    pc++;
    int numElements = rstack.back();

    for (int i = 1; i <= numElements; i++) {
        rstack[fpstack[fpsp]+ i] = rstack[sp-rstack[sp]];
    }

    sp = fpstack[fpsp]+rstack[sp];

    int rsSize = rstack.size() - 1;
    for (int i = sp; i < rsSize; i++) {
        rstack.pop_back();
    }
};