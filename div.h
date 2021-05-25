#ifndef INTERPRETER_DIV_H
#define INTERPRETER_DIV_H


#include "ByteCode.h"

class div : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_DIV_H
