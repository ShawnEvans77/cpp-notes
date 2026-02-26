#include <iostream>

int main() {
    // for loop

    for (unsigned int i{}; i < 10; i++) {
        std::cout << i << std::endl;
    }

    std::cout << "-----------------------------------------------------------------------";

    // size_t{} - it is a representation of an unsigned int type. it can only represent positive numbers.
    // can be used to represent sizes.

    // iterator, starting point, increment decrement

    // for loop - 'the good way'

    // size_t: a representation of some unsized int

    for (size_t i{0}; i < 100; i++) {
        std::cout << "I love TV!" << std::endl;
    }

    // hard coded values are bad. don't say j is less than 10. maybe make it a variable beforehand.

    return 0;
}