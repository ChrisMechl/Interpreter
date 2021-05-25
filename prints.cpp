#include "prints.h"
#include <iostream>

//Prints short at top of the stack
void prints::execute(){
    std::cout << rstack[sp--] << std::endl;
    rstack.pop_back();
    pc++;
};