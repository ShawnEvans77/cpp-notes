#include <iostream>

int main() {
    // we use a datatype called char to represent characters in C++.
    // after you declare characters, you can print characters using std::cout.
    // a char occupies a byte in memory, 8 bits.
    // ascii table... 33 represents exclamation mark, 65 represents A, and so on.

    char letter{65};

    // it is possible to assign a valid ascii char to a char variable.
    // 65 gets stored in memory, but CPP will intepret this as a character.

    std::cout << letter << std::endl; // prints A

    char character{'A'};

    std::cout << character << std::endl; // also prints A.

    std::cout << static_cast<int>(letter) << std::endl; // casting the letter back into an int.

    return 0;
}