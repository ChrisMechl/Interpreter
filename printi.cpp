#include "printi.h"
#include <iostream>

//Prints int at top of the stack
void printi::execute(){
    std::cout << (int)rstack[sp--] << std::endl;
    rstack.pop_back();
    pc++;
};