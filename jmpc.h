#ifndef INTERPRETER_JMPC_H
#define INTERPRETER_JMPC_H


#include "ByteCode.h"

class jmpc : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_JMPC_H
