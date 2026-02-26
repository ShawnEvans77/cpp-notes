#include <iostream>

int main() {

    // after a variable is initialized, you can later assign a new value to it.

    int var{255};

    std::cout << var << std::endl;
    var = 50;
    std::cout << var << std::endl;

    auto var1{22u};
    var1 = -55;
    std::cout << var1 << std::endl; // random number from changing the type of an auto variable. very dangerous, this is something
    // that can go wrong in your code.
    // this pesky changing does not even get a compiler error.

    std::cout << std::boolalpha; // io manipulator, forces true to print as "true" rather than a number.
    bool value{1};
    std::cout << value << std::endl;

    

    return 0;
}