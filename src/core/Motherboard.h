#pragma once
#include "RAM.h"
#include "CPU.h"
#include "Cartridge.h"


class Motherboard
{
public:
    Motherboard(RAM& m_RAM);
    void begin();

private:
    RAM& m_RAM;
    CPU m_CPU;
    Cartridge m_Cartridge;
    // ~Motherboard();
};
