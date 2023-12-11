#include <iostream>
#include <bitset>
int main() {
    char a = 0b10011100;
    char b = 0b10001110;
    char s = a+b;
    std::bitset<8> out(s);
    std::cout << out << std::endl;
}