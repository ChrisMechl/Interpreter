#ifndef INTERPRETER_PRINTC_H
#define INTERPRETER_PRINTC_H


#include "ByteCode.h"

class printc : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PRINTC_H
