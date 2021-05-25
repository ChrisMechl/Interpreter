Interpreter meant to be used in conjunction with compiler that will read bytestream of opcodes that run simple commands on given operands

Some commands include: peek, poke, push, pop, add, mul, div, jmp, cmpe (compare equal), cmplt (compare less than), cmpgt (compare greater than)

Supports floats, ints, shorts, chars

Compilation: g++ -o interpreter *.cpp *.h
Or use binary given: ./interpreter <test case>

Some binaries for test cases are in ./Tests