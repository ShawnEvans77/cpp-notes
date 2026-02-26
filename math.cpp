#include <iostream>
#include <cmath>

int main() {
    // various math operations.

    // abs, ceil, floor, tan, sqrt, cos, 

    double x{-3.245};

    std::cout << std::floor(x) << std::endl; // gives you negative three.
    std::cout << std::abs(x) << std::endl; // the absolute value.

    // std::exp is equal to e^x.
    // std::log

    std::cout << std::pow(10, 2) << std::endl; // 10 to the power of another number
    std::cout << std::sqrt(100) << std::endl; // getting the square root of a number.

    // cmath is how do math in CPP.

    return 0;
}