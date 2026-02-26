#include <iostream>

int main() {
    // TYPES:

    // int, double, float, char, bool, void, auto

    // we are going to play with most of these types in this chapter.
    // we groups these little data types into ones and zereos we can manipulate.

    // number systems: binary, octal, hexadecimal.

    int x = 15; // decimal.
    int y = 015; // octal
    int z = 0x0F; // hexadecimal
    int b = 0b1111; // binary. 

    std::cout << b << std::endl;
    std::cout << z << std::endl;

    // braced initialization, functional initilization, assignment initialization
    // it is possible to query for the size of your variable. it is going to tell us how much memory the integer occupies in your
    // program.

    return 0;
}