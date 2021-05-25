#ifndef INTERPRETER_POKEI_H
#define INTERPRETER_POKEI_H


#include "ByteCode.h"

class pokei : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POKEI_H
