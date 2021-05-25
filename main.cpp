#include <iostream>
#include <fstream>
#include "MemoryObject.h"
#include "Value.h"

#include "cmpe.h"
#include "cmplt.h"
#include "cmpgt.h"
#include "jmp.h"
#include "jmpc.h"
#include "call.h"
#include "ret.h"
#include "pushc.h"
#include "pushs.h"
#include "pushi.h"
#include "pushf.h"
#include "pushvc.h"
#include "pushvs.h"
#include "pushvi.h"
#include "pushvf.h"
#include "popm.h"
#include "popv.h"
#include "popa.h"
#include "peekc.h"
#include "peeks.h"
#include "peeki.h"
#include "peekf.h"
#include "pokec.h"
#include "pokes.h"
#include "pokei.h"
#include "pokef.h"
#include "swp.h"
#include "add.h"
#include "sub.h"
#include "mul.h"
#include "div.h"
#include "printc.h"
#include "prints.h"
#include "printi.h"
#include "printf.h"
#include "halt.h"


using namespace std;


int main(int argc, char* argv[]) {


    FILE* fp = fopen(argv[1], "r");
    fseek(fp, 0, SEEK_END);
    int size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    int val = 0;
    MemoryObject* memory[size];

    for(int idx = 0; idx < size; idx++){
        int curChar = fgetc(fp);

        memory[idx]->fillMemory(curChar, idx);

        int s = curChar + val;

        switch (s) {
            case 132:
                memory[idx] = new cmpe();
                break;
            case 136:
                memory[idx] = new cmplt();
                break;
            case 140:
                memory[idx] = new cmpgt();
                break;
            case 36:
                memory[idx] = new jmp();
                break;
            case 40:
                memory[idx] = new jmpc();
                break;
            case 44:
                memory[idx] = new call();
                break;
            case 48:
                memory[idx] = new ret();
                break;
            case 68:
                memory[idx] = new pushc();
                val = -1000;
                break;
            case 69:
                memory[idx] = new pushs();
                val = -2000;
                break;
            case 70:
                memory[idx] = new pushi();
                val = -4000;
                break;
            case 71:
                val = -4000;
                memory[idx] = new pushf();
                break;
            case 72:
                memory[idx] = new pushvc();
                break;
            case 73:
                memory[idx] = new pushvs();
                break;
            case 74:
                memory[idx] = new pushvi();
                break;
            case 75:
                memory[idx] = new pushvf();
                break;
            case 76:
                memory[idx] = new popm();
                break;
            case 80:
                memory[idx] = new popv();
                break;
            case 77:
                memory[idx] = new popa();
                break;
            case 84:
                memory[idx] = new peekc();
                break;
            case 85:
                memory[idx] = new peeks();
                break;
            case 86:
                memory[idx] = new peeki();
                break;
            case 87:
                memory[idx] = new peekf();
                break;
            case 88:
                memory[idx] = new pokec();
                break;
            case 89:
                memory[idx] = new pokes();
                break;
            case 90:
                memory[idx] = new pokei();
                break;
            case 91:
                memory[idx] = new pokef();
                break;
            case 94:
                memory[idx] = new swp();
                break;
            case 100:
                memory[idx] = new add();
                break;
            case 104:
                memory[idx] = new sub();
                break;
            case 108:
                memory[idx] = new mul();
                break;
            case 112:
                memory[idx] = new class div();
                break;
            case 144:
                memory[idx] = new printc();
                break;
            case 145:
                memory[idx] = new prints();
                break;
            case 146:
                memory[idx] = new printi();
                break;
            case 147:
                memory[idx] = new class printf();
                break;
            case 0:
                memory[idx] = new halt();
                break;
            default:
                memory[idx] = new Value();
                val += 1000;
        }
    }

    while (memory[0]->cont) {
        int pc = memory[0]->pc;

        memory[pc]->execute();

    }


    fclose(fp);


}
