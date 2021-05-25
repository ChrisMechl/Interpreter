#ifndef INTERPRETER_POPA_H
#define INTERPRETER_POPA_H


#include "ByteCode.h"

class popa : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POPA_H
