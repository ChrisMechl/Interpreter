#ifndef INTERPRETER_PUSHI_H
#define INTERPRETER_PUSHI_H


#include "ByteCode.h"

class pushi : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PUSHI_H
