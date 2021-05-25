#ifndef INTERPRETER_PUSHVC_H
#define INTERPRETER_PUSHVC_H


#include "ByteCode.h"

class pushvc : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_PUSHVC_H
