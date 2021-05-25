#ifndef INTERPRETER_PEEKS_H
#define INTERPRETER_PEEKS_H


#include "ByteCode.h"

class peeks : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PEEKS_H
