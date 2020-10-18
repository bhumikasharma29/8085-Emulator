#ifndef SIMULATOR
#define SIMULATOR
class Simulator8085
{
private:
    char registers[6];
    bool flags[8];
    short int pc; // Program counter: 16 bits
    short int sp; // Stack pointer: 16 bits
    short int start;

    bool setRegister(char, short int);

public:
    Simulator8085();
};
#endif