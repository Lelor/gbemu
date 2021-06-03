#include "Motherboard.hpp"


Motherboard::Motherboard()
{
    m_RAM = RAM();
    m_CPU = CPU(&m_RAM);
    m_Cartridge = Cartridge();
};

void Motherboard::begin()
{
    while(1)
    {
        char opCode = m_Cartridge.getOpCode(m_CPU.stackPointer);
        m_CPU.tick(opCode);
    }
}