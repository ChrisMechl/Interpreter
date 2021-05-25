#ifndef INTERPRETER_RET_H
#define INTERPRETER_RET_H


#include "ByteCode.h"

class ret : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_RET_H
