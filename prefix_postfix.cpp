#include <iostream>

int main() {
    int val{5};

    val = val + 1; // incrementing by one.
    val = val - 1; // decrementing by one.

    // another thing we can do in cpp is postfix increment & decrement. 

    int x{20};

    std::cout << x++ << std::endl; // 20 gets printed first because of postfix increment. 
    std::cout << x << std::endl; // 21 is going to be printed because the increment happened.

    int y{30};

    std::cout << ++y << std::endl; // unary prefix increment. this is gonna print 31.
    std::cout << y << std::endl; // this still going to print 30.

    std::cout << y-- << std::endl; // postfix decrement. this is gonna print 30 still.
    std::cout << --y << std::endl; // this is gonna print 29.

    return 0;
}