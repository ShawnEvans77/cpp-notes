#include <iostream>

int main() {
    // you can use a char pointer like we've been using for everything else.
    // pointer to char can also mean something special. you can initialize with a string literal: C-String.

    const char* word{"Shawn"};

    std::cout << word << std::endl; // Shawn
    std::cout << *word << std::endl; // the first letter of Shawn
    // gcc compiles this with a warning.

    return 0;
}