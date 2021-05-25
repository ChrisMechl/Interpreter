#ifndef INTERPRETER_HALT_H
#define INTERPRETER_HALT_H


#include "ByteCode.h"

class halt : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_HALT_H
