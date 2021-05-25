#include "pushf.h"
#include <string.h>


void pushf::execute() {
    float f;
    unsigned char b[] = {(unsigned char)mem[pc+1], (unsigned char)mem[pc+2], (unsigned char)mem[pc+3], (unsigned char)mem[pc+4]};
    memcpy(&f, &b, sizeof(f));
    rstack.push_back(f);
    sp++;
    pc += 5;
}