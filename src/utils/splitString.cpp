#include "util.h"
#include "MASTER.h"

vector<string> splitString(string str, string delimitter)
{
    vector<string> result;

    const char *ch = str.c_str();
    const char *delim = delimitter.c_str();
    char *var = (char *)ch;

    char *splitString;

    while ((splitString = strtok(var, delim)) != NULL)
    {
        string token = splitString;
        result.push_back(token);
    }

    return result;
}