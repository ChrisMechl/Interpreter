#ifndef INTERPRETER_PRINTF_H
#define INTERPRETER_PRINTF_H


#include "ByteCode.h"

class printf : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PRINTF_H
