#pragma once
#include "RAM.h"


class CPU
{
public:
    CPU(RAM& m_Ram);
    unsigned char tick(unsigned char opCode);
    unsigned char stackPointer;
    unsigned short programCounter;
private:
    RAM& m_ram;
};