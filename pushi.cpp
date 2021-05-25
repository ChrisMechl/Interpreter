#include "pushi.h"
#include <iostream>

void pushi::execute() {
    int i = (int)mem[pc+1] ^ ((int)mem[pc+2] << 8) ^ ((int)mem[pc+3] << 16) ^ ((int)mem[pc+4] << 24);
    rstack.push_back(i);
    sp++;
    pc += 5;

}