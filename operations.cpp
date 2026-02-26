#include <iostream>

int main() {
    // add, subtract, divide, modulus, decrement, multiply, built in utilities, formatting, increment

    // basic operations. 

    // add, subtract, divide, multiply, modulus

    int x{50};
    int y{30};

    int sum{x+y};
    int difference{x-y};
    int product{x*y};
    int quotient{x/y};

    std::cout << sum << std::endl;
    std::cout << product << std::endl;
    std::cout << quotient << std::endl; // decimal portion gets truncated. 

    std::cout << 100 % 3 << std::endl; // modulus

    // the modulus operator can be hard to understand for beginners. 

    return 0;
}