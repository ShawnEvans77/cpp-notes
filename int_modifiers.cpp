#include <iostream>

int main() {
    // positive and negative numbers in integers.

    signed int x{20};
    signed int z{35};

    // signed integer is an integer with a polarity. 
    // int is 4 bytes regardless of if its signed.
    // unsigned is [ 0 - 2^n - 1]
    // signed is [-2^n-1 ~ 2^n-1 - 1]

    // unsigned int is about 0 to 4 billion, signed int is negative 2 billion to positive 2 billion, 32 bit int limit

    // we can flag our integer types as shorts or longs.

    // a short variable is about 2 bytes in memory.

    short int y{50}; // short int limit is about thirty two thousand
    long int cat{30}; // long int is about 4 or 8 bytes.

    //unsigned int number{-23};
    //int_modifiers.cpp:23:25: error: narrowing conversion of '-23' from 'int' to 'unsigned int' [-Wnarrowing]

    std::cout << y << std::endl;

    std::cout << sizeof(cat) << std::endl; // 4 bytes
    std::cout << sizeof(y) << std::endl; // 2 bytes
    std::cout << sizeof(long long) << std::endl; // 4 bytes
    std::cout << sizeof(long) << std::endl; // 4 bytes

    // narrowing confersions

    return 0;
}