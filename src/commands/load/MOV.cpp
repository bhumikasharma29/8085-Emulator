#include "Simulator8085.h"
#include "MASTER.h"

int Simulator8085::mov(string r1, string r2)
{
    if (r1.length() == 1)
    {
        return setRegister(r1[0], r2);
    }

    return 0;
}