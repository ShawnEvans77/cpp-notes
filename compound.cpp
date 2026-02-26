#include <iostream>

int main() {
    // the compound assignment operator, also known as augmented assignment operator.

    int value{100};

    value += 30; // equivalent to value = value + 30
    std::cout << value << std::endl;

    value *= 2; // equivalent to value = value * 2
    std::cout << value << std::endl;

    return 0;
}