#include <iostream>
#include <iomanip>

int main() {
    // any data you work with will be stored in the form of one and zereos. fractional types are called floating types.
    // precision.

    // float, double, and long double. the main difference is the size they occupy.

    // float = 4 bytes.
    // double = 8 bytes.
    // long double = 12 bytes.

    // precision is the number of bits you can represent with that type.
    // for certain precisions, we will need to use a better data type.

    float x{4389.23224545};

    std::cout << x << '\n';

    std::cout << sizeof(float) << '\n';

    // std::setprecision - control the maximum precision of data streams to std::cout. 

    // you can use scientific precision in your floating point numbers.

    std::cout << std::setprecision(25);

    double zed{2345.34897348957438957438957489375};
    float zed_alpha{2345.34897348957438957438957489375};

    std::cout << zed << '\n';
    std::cout << zed_alpha << '\n';

    double sci{12e4}; // 12 times 10 to the fourth

    std::cout << sci << std::endl;

    return 0;
}