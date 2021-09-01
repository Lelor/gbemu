#include "Motherboard.h"


Motherboard::Motherboard(RAM& m_RAM)
:m_RAM(m_RAM)
{
    m_CPU = CPU(*m_RAM);
    m_Cartridge = Cartridge();
};

void Motherboard::begin()
{
    while(1)
    {
        char opCode = m_Cartridge.getOpCode(m_CPU.programCounter);
        m_CPU.tick(opCode);
    }
}
