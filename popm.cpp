#include "popm.h"
#include <iostream>

void popm::execute(){
    int popNum = rstack[sp] + 1;
    pc++;
    for(int idx = 0; idx < popNum; idx++){
        sp--;
        rstack.pop_back();
    }
};