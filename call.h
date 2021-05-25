#ifndef INTERPRETER_CALL_H
#define INTERPRETER_CALL_H


#include "ByteCode.h"

class call : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_CALL_H
