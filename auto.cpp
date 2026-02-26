#include <iostream>

int main() {
    // auto - let the compiler deduce the type.

    auto var{22};

    auto var1{22u}; // an unsigned integer that is 22.

    auto var2{55ll}; // an unsigned long long.

    std::cout << sizeof(var) << std::endl; // as 22 is an integer, this is 4 bytes.

    // visual studio code can intepret what type an auto variable is.

    return 0;
}