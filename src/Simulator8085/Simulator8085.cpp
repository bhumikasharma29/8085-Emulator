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
    if ((r >= 65 && r <= 90) || (r >= 97 && r <= 122))
    {
        if (r >= 97 && r <= 122)
            r -= 32;

        switch (r)
        {
        case 'B':
            registers[0] = (char)n;
            return 1;

        case 'C':
            registers[1] = (char)n;
            return 1;

        case 'D':
            registers[2] = (char)n;
            return 1;

        case 'E':
            registers[3] = (char)n;
            return 1;

        case 'H':
            registers[4] = (char)n;
            return 1;

        case 'L':
            registers[5] = (char)n;
            return 1;

        default:
            return 0;
        }
    }

    return 0;
}