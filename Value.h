#ifndef INTERPRETER_VALUE_H
#define INTERPRETER_VALUE_H


#include "MemoryObject.h"

class Value : public MemoryObject {
public:
    enum valueTag {
        char_t,
        short_t,
        int_t,
        float_t,
        error_t};

    Value() {}
    virtual ~Value() {}
    virtual char getChar();
    virtual short getShort();
    virtual int getInt();
    virtual float getFloat();
    virtual void execute();

};


#endif //INTERPRETER_VALUE_H
