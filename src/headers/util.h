#include <string>
#include <vector>

#ifndef UTIL_H
#define UTIL_H
int hexToInt(std::string);
std::vector<std::string> splitString(std::string, std::string);
int isValidAddress(std::string);
std::string nextAddress(std::string, std::string);
std::string intToHex(int);
#endif