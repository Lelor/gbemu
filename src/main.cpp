#include <iostream>
#include "core/CPU.h"



int main()
{
    std::cout << "hello, world" << std::endl;
    CPU cpu = CPU(*(new RAM()));
    return 0;
};
