#include <iostream>

int main() {
    // booleans store either true or false.

    // we can make decisions with variables.

    // printing out a bool ---- 1 is true. 0 is false.

    // booleans occupy 8 bits in memory. they take up an entire byte. you might think its wasteful (and it could be)
    // if you are working on a memory critical device, maybe you will try to pack even more data in a byte.
    // a byte can store 256 different values.

    bool red{true};
    bool green{false};

    if (red) {
        std::cout << "STOP!" << std::endl; // STOP is printed when red is true.
    } else {
        std::cout << "Go through!" << std::endl;
    }

    if (green) {
        std::cout << "The light is green!" << std::endl;
    } else {
        std::cout << "The light is red!" << std::endl;
    }

    // we can make decisions based on booleans in our C++ code.

    std::cout << sizeof(bool) << std::endl; // 1 byte.
    std::cout << red << std::endl; // 1 gets printed out as 1 is true.

    // booleans are used for making decisions in your program. that is what you will mostly be using them for.

    return 0;
}