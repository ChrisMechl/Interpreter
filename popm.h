#ifndef INTERPRETER_POPM_H
#define INTERPRETER_POPM_H


#include "ByteCode.h"

class popm : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POPM_H
