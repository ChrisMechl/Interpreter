#ifndef INTERPRETER_POKEC_H
#define INTERPRETER_POKEC_H


#include "ByteCode.h"

class pokec : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POKEC_H
