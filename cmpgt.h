#ifndef INTERPRETER_CMPGT_H
#define INTERPRETER_CMPGT_H


#include "ByteCode.h"

class cmpgt : public ByteCode{
public:
    void execute();
};


#endif //INTERPRETER_CMPGT_H
