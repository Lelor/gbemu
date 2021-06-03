#pragma once
#include <stdio.h>
#include <vector>


class Cartridge
{
public:
    Cartridge();
    unsigned char getOpCode(unsigned char stackPtr);
private:
    unsigned char rom[0x10000];
    unsigned char bank[0x200000];
};