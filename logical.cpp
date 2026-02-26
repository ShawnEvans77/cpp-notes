#include <iostream>

int main() {
    // logical operators.

    // these operators will work on boolean operands.

    // AND - &&. 
    // OR - ||. 
    // NOT - ! - negatives whatever you give it. if A is true and we negate that, we get an answer of false.

    bool A{true};
    bool B{false};

    int x{20};
    int y{20};

    std::cout << std::boolalpha;

    std::cout << (A && B) << std::endl; // this is false.
    std::cout << ( (A == B) || (x == y) ) << '\n';

    return 0;
}