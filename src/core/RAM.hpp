#pragma once
#include <vector>


class RAM
{
public:
    Ram();

private:
    std::vector<unsigned char*> bank;
};