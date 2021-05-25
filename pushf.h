#ifndef INTERPRETER_PUSHF_H
#define INTERPRETER_PUSHF_H


#include "ByteCode.h"

class pushf : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_PUSHF_H
