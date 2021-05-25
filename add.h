#ifndef INTERPRETER_ADD_H
#define INTERPRETER_ADD_H


#include "ByteCode.h"

class add : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_ADD_H
