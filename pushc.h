#ifndef INTERPRETER_PUSHC_H
#define INTERPRETER_PUSHC_H


#include "ByteCode.h"

class pushc : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_PUSHC_H
