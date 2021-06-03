#pragma once
#include "RAM.hpp"
#include "CPU.hpp"
#include "Cartridge.hpp"


class Motherboard
{
public:
    Motherboard();
    void begin();

private:
    RAM m_RAM;
    CPU m_CPU;
    Cartridge m_Cartridge;
    // ~Motherboard();
};