#ifndef INTERPRETER_JMP_H
#define INTERPRETER_JMP_H


#include "ByteCode.h"

class jmp : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_JMP_H
