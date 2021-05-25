#ifndef INTERPRETER_POKES_H
#define INTERPRETER_POKES_H


#include "ByteCode.h"

class pokes : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_POKES_H
