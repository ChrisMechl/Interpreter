cmake_minimum_required(VERSION 3.14)
project(interpreter)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(interpreter
        ByteCode.cpp
        ByteCode.h
        main.cpp
        MemoryObject.cpp
        MemoryObject.h
        RunTimeStackObject.cpp
        RunTimeStackObject.h
        Value.cpp
        Value.h
        pushi.cpp
        printc.cpp printc.h printf.cpp printf.h printi.cpp printi.h prints.h prints.cpp halt.cpp halt.h
        add.cpp add.h div.cpp div.h mul.cpp mul.h sub.cpp sub.h peekc.cpp peekc.h peekf.cpp peekf.h peeki.cpp peeki.h peeks.cpp peeks.h popa.cpp popa.h popm.cpp popm.h popv.cpp popv.h pokec.cpp pokec.h pokef.cpp pokef.h pokei.cpp pokei.h pokes.cpp pokes.h swp.cpp swp.h
        pushi.h cmpe.cpp cmpe.h cmplt.cpp cmplt.h cmpgt.cpp cmpgt.h jmp.cpp jmp.h jmpc.cpp jmpc.h call.cpp call.h ret.cpp ret.h pushc.cpp pushc.h pushs.cpp pushs.h pushf.cpp pushf.h pushvc.cpp pushvc.h pushvs.cpp pushvs.h pushvi.cpp pushvi.h pushvf.cpp pushvf.h)