#include <iostream>

int main() {
    // integral types less than 4 bytes in size don't support arithmetic operations.

    // char is 1 byte. short int is 2 bytes. you can't do arithmetic operations if your int is stored in these types.

    char x = 'A';

    std::cout << ++x << std::endl;

    return 0;
}