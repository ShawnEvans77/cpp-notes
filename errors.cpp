#include <iostream>

int main() {
    // compile time errors, runtime errors, and warnings.
    // the ultimate goal of every C++ developer is to be able to generate a binary executable file from the c++ code.
    // we have to run the code through the compiler to do that.

    // if we break those rules, we are going to get problems.

    // std::cout << "Hello World!" << std:endl
    // ^ this is going to result in a compilation error.

    // runtime error: 7 divided by zero.

    int x = (7/0);

    std::cout << x << '\n';

    // this is an example of runtime error you can face in your program. 
    // compile time errors will cause your compilation to fail. 
}