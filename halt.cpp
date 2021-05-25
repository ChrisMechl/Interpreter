#include "halt.h"
#include <iostream>

void halt::execute(){
    std::cout << std::endl << "Compile Values:" << std::endl;
    std::cout << "PC: " << pc << std::endl;
    std::cout << "SP: " << sp << std::endl;
    std::cout << "FPSP: " << fpsp << std::endl;

    std::cout << "RSTACK: ";
    if (-1 == sp) {
        std::cout << "empty";
    }
    else {
        for (int i = 0; i < sp; i++) {
            std::cout << rstack[i] << " ";
        }
    }
    std::cout << std::endl;

    std::cout << "FPSTACK: ";
    if (-1 == fpsp) {
        std::cout << "empty";
    }
    else {
        for (int i = 0; i < fpsp; i++) {
            std::cout << fpstack[i] << " ";
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;

    cont = false;
};