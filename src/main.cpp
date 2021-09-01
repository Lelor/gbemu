#include <iostream>
#include "core/Motherboard.h"
#include "core/RAM.h"
#include "core/CPU.h"
#include "core/Cartridge.h"


int main()
{
    std::cout << "hello, world" << std::endl;
    RAM ram = RAM();
    CPU cpu = CPU(ram);
    Cartridge rom = Cartridge();
    Motherboard mobo = Motherboard(ram, cpu, rom);
    return 0;
};
