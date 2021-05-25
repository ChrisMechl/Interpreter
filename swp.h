#ifndef INTERPRETER_SWP_H
#define INTERPRETER_SWP_H


#include "ByteCode.h"

class swp : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_SWP_H
