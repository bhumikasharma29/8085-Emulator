#include "util.h"
#include "MASTER.h"

string intToHex(int n)
{

    string hex = "";

    while (n != 0)
    {
        int rem = n % 16;

        if (rem >= 10)
            hex = (char)(rem - 10 + 65) + hex;
        else
            hex = (char)(rem - '0') + hex;

        n /= 16;
    }
    return hex;
}