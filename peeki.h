#ifndef INTERPRETER_PEEKI_H
#define INTERPRETER_PEEKI_H


#include "ByteCode.h"

class peeki : public ByteCode {
public:
    virtual void execute();
};


#endif //INTERPRETER_PEEKI_H
