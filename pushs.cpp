#include "pushs.h"

void pushs::execute() {
    short s = (int)mem[pc+1] ^ ((int)mem[pc+2] << 8);
    rstack.push_back(s);
    sp++;
    pc += 3;
}