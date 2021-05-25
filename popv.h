#ifndef INTERPRETER_POPV_H
#define INTERPRETER_POPV_H


#include "ByteCode.h"

class popv : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POPV_H
