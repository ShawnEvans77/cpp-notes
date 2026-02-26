#include <iostream>

int main() {
    // relational operators - operators you use to compare stuff.

    int x{100};
    int y{200};

    std::cout << std::boolalpha;

    std::cout << (x < y) << std::endl;
    std::cout << (x > y) << std::endl;
    std::cout << (x == y) << std::endl;
    std::cout << (x != y) << std::endl;
    std::cout << (x <= y) << std::endl;

    // doing this type of thing without parantheses would have resulted in an error.

    bool val{x == y}; // i can store a boolean expression instead of a boolean variable.

    std::cout << val << std::endl;

    return 0;
}