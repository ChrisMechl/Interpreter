#ifndef INTERPRETER_PRINTS_H
#define INTERPRETER_PRINTS_H


#include "ByteCode.h"

class prints : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PRINTS_H
