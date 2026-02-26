#include <iostream>

int main() {
    // variables have an address in memory. 
    // you can grab that address using a special kind of variable called a pointer.
    // a pointer is a special type of variable in a C++ program that stores addresses of other variables.
    // position of the * doesn't matter. some people put it on the left, or some people put it on the right.

    // we can declare and initialize pointers with nullptr.
    // int int_var{43} - * pointer data type

    // & - ampersand - addressof operator.

    int x{50};
    int* p{&x};

    // when we say int* p; <- p gets initializes to the nullptr.

    std::cout << p << std::endl; // gives you the address of the int var 50.
    // we also could have did this using the assignment operator.

    // type is important. we cannot have an int pointer but then try to put a double pointer inside of it.

    double y{30};
    double* py{&y};

    int* none{nullptr}; // initializes this pointer to the null pointer.

    std::cout << py << std::endl;
    std::cout << sizeof(int*) << std::endl; // int pointers are 8 bytes on my system. 
    // 'on a 64 bit operating system how big is a pointer?' pointer types are 8 bytes on my system.

    // derefencing a pointer

    int* pointer{nullptr};
    int number{555};

    pointer = &number;

    int dereferenced{*pointer}; // dereferencing a pointer.

    std::cout << dereferenced << std::endl; // prints 555.

    return 0;
}