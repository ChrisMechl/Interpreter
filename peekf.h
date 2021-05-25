#ifndef INTERPRETER_PEEKF_H
#define INTERPRETER_PEEKF_H


#include "ByteCode.h"

class peekf : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PEEKF_H
