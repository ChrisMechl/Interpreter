#ifndef INTERPRETER_PEEKC_H
#define INTERPRETER_PEEKC_H


#include "ByteCode.h"

class peekc : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PEEKC_H
