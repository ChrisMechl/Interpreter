#ifndef INTERPRETER_SUB_H
#define INTERPRETER_SUB_H


#include "ByteCode.h"

class sub : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_SUB_H
