#include <iostream>

int main() {
    // dangling pointer - a pointer that doesn't point to a valid memory address. 
    // dangling pointers are really bad. they lead to undefined behavior. 

    int x{50};

    int* pointer{&x};
    std::cout << pointer << std::endl; // points to garbage 0x8 address. 

    // to prevent dangling pointers, always initialize your pointers.
    // if you don't know what that pointer will be initialized to, put in a null pointer first. 

    // reset your pointers to nullptr after finishing using the pointer.
    // for multiple pointers pointing to the same address, make sure the owner pointer is clear. 

    // reset your pointers after you call delete.

    delete pointer;
    std::cout << *pointer << std::endl;

    return 0;
}