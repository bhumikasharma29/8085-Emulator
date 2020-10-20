#include "util.h"

int isValidAddress(std::string add)
{
    if (add.length() == 4)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!((add[i] >= 'A' && add[i] <= 'F') && (add[i] >= '0' && add[i] <= '9')))
                return 0;
        }
        return 1;
    }
    return 0;
}