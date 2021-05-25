#ifndef INTERPRETER_PRINTI_H
#define INTERPRETER_PRINTI_H


#include "ByteCode.h"

class printi : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PRINTI_H
