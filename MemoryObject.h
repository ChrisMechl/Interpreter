#ifndef INTERPRETER_MEMORYOBJECT_H
#define INTERPRETER_MEMORYOBJECT_H

#include "RunTimeStackObject.h"
#include <vector>
#include <iostream>
using namespace std;

class MemoryObject {
public:
    MemoryObject() {}
    virtual ~MemoryObject() {}
    virtual void execute() = 0;
    void fillMemory(int, int);
    // operator <<

    static bool cont;
    static int pc;
protected:
    static vector<double> mem;
    static vector<double> rstack;
    static int sp;
    static vector<double> fpstack;
    static int fpsp;

};


#endif //INTERPRETER_MEMORYOBJECT_H
