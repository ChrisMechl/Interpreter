#ifndef INTERPRETER_POKEF_H
#define INTERPRETER_POKEF_H


#include "ByteCode.h"

class pokef : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POKEF_H
