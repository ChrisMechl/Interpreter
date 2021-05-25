#ifndef INTERPRETER_RUNTIMESTACKOBJECT_H
#define INTERPRETER_RUNTIMESTACKOBJECT_H


class RunTimeStackObject{
public:

    virtual char getChar();
    virtual short getShort();
    virtual int getInt();
    virtual float getFloat();

    // operator <<
};


#endif //INTERPRETER_RUNTIMESTACKOBJECT_H
