#include <string>
#include <map>
#ifndef SIMULATOR
#define SIMULATOR
class Simulator8085
{
private:
    std::string registers[7];
    bool flags[8];
    std::string pc; // Program counter: 16 bits
    std::string sp; // Stack pointer: 16 bits
    std::string start;
    std::map<std::string, std::string> memory;
    int setRegister(char, std::string);
    void execute();

public:
    Simulator8085();
    int mov(std::string, std::string);
    void runFromTerminal();
};
#endif