#include <iostream>

int main() {
    int y; // some compilers might initialize x to zero here.

    int x{}; // initialization to zero. brace initialization. 

    int z{10}; // initialization to ten.

    int a{15}; // initialization to fifteen.

    //int decimal{15.55};

    std::cout << x << std::endl;
    //initializations.cpp:12:17: error: narrowing conversion of '1.5550000000000001e+1' from 'double' to 'int' [-Wnarrowing]
    //the compiler does not allow implementing this.

    int b(10.2); //functional initialization

    // functional initialization is perhaps less safe than brace initialization cause int b{10.2} would have been compiler error.
    // information is lost. 10.2 gets truncated.

    // braced initialization gives compiler error for wrong types.

    std::cout << b << std::endl;

    int c = 20.5; // the simple assignment initialization you might already be familiar with.
    // for some god awful reason, this language lets you put 20.5 into an integer variable.

    std::cout << c << std::endl;
    std::cout << sizeof(int) << std::endl;

    return 0;
}