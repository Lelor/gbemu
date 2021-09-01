#pragma once
#include "RAM.h"

struct Registers
{
    unsigned char A;
    unsigned char B;
    unsigned char C;
    unsigned char D;
    unsigned char E;
    unsigned char F;
    unsigned char H;
    unsigned char L;
};

class CPU
{
public:
    CPU(RAM& m_Ram);
    unsigned char tick(unsigned char opCode);
    unsigned char stackPointer;
    unsigned short programCounter;
    Registers r;
private:
    RAM& m_ram;
};
