#include "printc.h"
#include <iostream>

//Prints char at top of the stack
void printc::execute(){
    std::cout << rstack[sp--] << std::endl;
    rstack.pop_back();
    pc++;
};
