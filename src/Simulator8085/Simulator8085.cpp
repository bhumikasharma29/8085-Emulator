#include "Simulator8085.h"

Simulator8085::Simulator8085()
{
    // set flags to false
    for (int i = 0; i < 8; i++)
    {
        flags[i] = 0;
    }
}

bool Simulator8085::setRegister(char r, short int n)
{
    return 0;
}