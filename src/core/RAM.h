#pragma once
#include <vector>


class RAM
{
public:
    RAM();

private:
    // internal memory bank buffer
    std::vector<unsigned char*> bank;
};
