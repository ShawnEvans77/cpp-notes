#include <iostream>

int main() {
    // memory leak - when you lose access to a piece of memory that was dynamically allocated.
    int* p{new int{67}};

    int num{55};

    p = &num; // we have no way to release the memory allocated to p. the pointer helping us access this memory
    // has been repurposed to point to this number variable here.

    // if we allocate new memory, the first pointer is going to be leaked. the program has lost the memory pointing to 67.
    // another memory leak is when the pointer exists in a scope. the variable dies if put in a scope, but memory remains alive.

    // also unsafe - double allocation
    int* x{new int{55}};

    x = new int{600}; // the original memory gets lost.
}