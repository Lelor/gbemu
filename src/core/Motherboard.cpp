#include "Motherboard.h"


Motherboard::Motherboard(RAM& m_RAM, CPU& m_CPU, Cartridge& m_Cartridge)
:m_RAM(m_RAM), m_CPU(m_CPU), m_Cartridge(m_Cartridge) 
{
    // do something here?
};

void Motherboard::begin()
{
    while(1)
    {
        char opCode = m_Cartridge.getOpCode(m_CPU.programCounter);
        m_CPU.tick(opCode);
    }
}
