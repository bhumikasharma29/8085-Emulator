#include "util.h"
#include "MASTER.h"

string nextAddress(string command, string current_addr)
{

    map<string, int> commandSize;
    map<string, int>::iterator it;

    commandSize["MOV"] = 1;
    commandSize["EOF"] = 0;

    string commandName = splitString(command, ", ")[0];
    it = commandSize.find(commandName);

    if (it != commandSize.end())
    {
        int size = it->second;
        int newAddr = hexToInt(current_addr) + size;
        return intToHex(newAddr);
    }
    else
        return "NO SUCH COMMAND";
}