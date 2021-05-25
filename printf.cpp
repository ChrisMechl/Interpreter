#include "printf.h"
#include <iostream>

//Prints float at top of the stack
void printf::execute(){
    std::cout << rstack[sp--] << std::endl;
    rstack.pop_back();
    pc++;
};