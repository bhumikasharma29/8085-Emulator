#include "Simulator8085.h"
#include "MASTER.h"
#include "util.h"
//WIP
void Simulator8085::execute()
{

    string command = memory.find(start)->second;
    pc = nextAddress(command, start);

    while (!command.compare("EOF"))
    {
        int successCode = 0;
        vector<string> tokens = splitString(command, ", ");

        if (tokens[0].compare("MOV"))
        {
            successCode = mov(tokens[1], tokens[2]);
        }

        if (!successCode)
        {
            cout << "An Error Occured";
            exit(1);
        }

        command = memory.find(start)->second;
        pc = nextAddress(command, pc);
    }

    cout << "A : " << registers[6];
    cout << "B : " << registers[0];
    cout << "C : " << registers[1];
    cout << "D : " << registers[2];
    cout << "E : " << registers[3];
    cout << "H : " << registers[4];
    cout << "L : " << registers[5];
}