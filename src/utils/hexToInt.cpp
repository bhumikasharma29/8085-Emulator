#include "util.h"
#include <math.h>
int hexToInt(std::string s)
{

    int n = 0;
    int l = s.length();

    for (int i = 0; i < l; i++)
    {
        if (isalpha(s[i]) && (s[i] >= 'A' && s[i] <= 'F'))
            n += (s[i] - 65 + 10) * pow(16, l - i - 1);
        else if (isdigit(s[i]))
            n += (s[i] - (int)'0') * pow(16, l - i - 1);
    }

    return n;
}