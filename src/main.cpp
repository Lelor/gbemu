#include <iostream>
#include "core/Motherboard.h"



int main()
{
    std::cout << "hello, world" << std::endl;
    RAM ram = RAM();
    CPU cpu = CPU(ram);
    Cartridge rom = Cartridge();
    Motherboard mobo = Motherboard(ram, cpu, rom);
    return 0;
};
