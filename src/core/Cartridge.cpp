#include "Cartridge.h"
#include <string.h>


Cartridge::Cartridge()
{
    memset(rom, 0, sizeof(rom));
	memset(bank, 0, sizeof(bank));
    FILE *in;
    in = fopen("pokemon_red.gb", "rb");
    fread(bank, 1, 0x200000, in);
    fclose(in);
    memcpy(&rom[0x0], &bank[0], 0x8000); // maybe a separate entity for memory banks?
}
