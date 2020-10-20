#include "Simulator8085.h"
#include "MASTER.h"
int Simulator8085::setRegister(char r, string n)
{
    map<char, int> registerNum;
    map<char, int>::iterator it;
    map<char, int>::iterator it1;

    registerNum['A'] = 0;
    registerNum['B'] = 1;
    registerNum['C'] = 2;
    registerNum['D'] = 3;
    registerNum['E'] = 4;
    registerNum['H'] = 5;
    registerNum['L'] = 6;

    it = registerNum.find(r);

    if (it != registerNum.end())
    {
        if (n.length() == 2)
        {
            registers[it->second] = n;
            return 1;
        }
        else if (n.length() == 1)
        {
            it1 = registerNum.find(n[0]);

            if (it1 != registerNum.end())
            {
                registers[it->second] = registers[it1->second];
                return 1;
            }
            else
                return 0;
        }
        else
            return 0;
    }
    return 0;
}