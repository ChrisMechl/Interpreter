#ifndef INTERPRETER_MUL_H
#define INTERPRETER_MUL_H


#include "ByteCode.h"

class mul : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_MUL_H
