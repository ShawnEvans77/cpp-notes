#include <iostream>

int main() {

    // if keyword, else keyword, else if keyword, ternary operator, switch operator

    // nested conditions

    int x{20};
    int y{30};

    if (y > x) {
        std::cout << "y is greater than x" << std::endl;
    } else {
        std::cout << "x is greater than y" << std::endl;
    }

    bool equal{x == y};

    if (equal) {
        std::cout << "they are equal." << std::endl;
    } else {
        std::cout << "they are not equal." << std::endl;
    }

    return 0;
}