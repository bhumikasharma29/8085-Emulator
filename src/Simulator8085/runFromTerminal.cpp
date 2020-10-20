#include "Simulator8085.h"
#include "util.h"
#include "MASTER.h"

void Simulator8085::runFromTerminal()
{
    cout << "Enter starting address: ";
    cin >> start;
    string command;
    string current_addr;

    while (!isValidAddress(start))
    {
        cout << "Not a valid address" << endl;
        cout << "Enter starting address: ";
        cin >> start;
    }

    cout << start << " :";
    cin >> command;
    current_addr = start;
    transform(command.begin(), command.end(), command.begin(), ::toupper);
    memory.insert(make_pair(current_addr, command));

    while (!command.compare("EOF"))
    {
        memory.insert(make_pair(current_addr, command));
        current_addr = nextAddress(command, current_addr);
        if (!current_addr.compare("NO SUCH COMMAND"))
        {
            cout << current_addr << endl;
            exit(0);
        }
        cout << current_addr << " :";
        cin >> command;
        transform(command.begin(), command.end(), command.begin(), ::toupper);
    }
    execute();
}