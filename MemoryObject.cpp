#include "MemoryObject.h"
#include <vector>
#include <iostream>
using namespace std;

void MemoryObject::fillMemory(int val, int ct) {
    mem.push_back(val);
}

vector<double> MemoryObject::mem;
vector<double> MemoryObject::rstack;
int MemoryObject::sp = -1;
vector<double> MemoryObject::fpstack;
int MemoryObject::fpsp = -1;
int MemoryObject::pc = 0;
bool MemoryObject::cont = true;

