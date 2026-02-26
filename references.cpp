#include <iostream>

int main() {
    // set up aliases for your variable.
    // reference is in same way as original variable.

    int x{50};

    int& ref{x};

    std::cout << ref << std::endl;

    int* p{&ref};

    std::cout << p << std::endl; // both of these are the same thing.
    std::cout << &x << std::endl; // both of these are the same.

    ref *= 10;
    std::cout << x << std::endl;

    return 0;
}