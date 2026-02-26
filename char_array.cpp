#include <iostream>

int main() {
    // a C-String has a null terminator at the end
    // it tells cpp we have hit the end of the string
    // auto filled in null characters

    char message[]{'H', 'e', 'l', 'l', 'o', 'W', 'o', 'r', 'l', 'd', '\0'}; // null terminated string

    std::cout << message << std::endl; // C-style string. for strings to be printed out correctly, they need to be null terminated

    char message_alt[]{"HelloWorld"}; // null terminated string

    std::cout << message_alt << std::endl;

    int values[]{1,2,3};

    std::cout << values << std::endl; // prints a memory address.

    return 0;
}