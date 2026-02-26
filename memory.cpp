#include <iostream>

int main() {
    // c++ development workflow goes like this. program goes to IDE. then we get binary representation of code we have.
    // the program gets loaded into our computer memory.
    // the program is loaded into a special area of memory called program area.

    // if we have many programs and each program uses real memory, we would quickly run out of memory.
    // you would never have enough memory if real memory was used.

    // the idea was born to use virtual memory. fool the program into thinking it has access to all of the memory.
    // each program is abstracted into a process. a process has memory range 0<>2^N-1 where N is number of bits the OS has.

    // each program thinks it owns all of the systems memory. we have real memory and virtual memory, 0 to 2 to the power of n.

    // the program goes to a compiler than to a binary file of how things are laid out in memory.
    // when the program executes, it goes to the memory management unit. 

    // the entire program is not loaded in real memory by the cpu. 
    // memory management unit helps mapping between

    // if we execute program 1-4, the MMU assigns them sections onto the real ram on the computer. 
    // the memory map is defined by the operating systems.

    // memory goes from 0 to 2^n in memory map. we have text, data, stack, heap, data, text.
    // STACK and HEAP for our powers.

    // stack stores local variables. they are stored in the stack section of memory.
    // we have the heap. we store additional memory in the heap.
    // we have text section which loads actual binaries of our program. 
    // heap is additional memory the program can use if we run out of stack memory.

    // we mainly care about stack and heap.

    // allocating memory on the heap.

    int* pointer{nullptr};
    pointer = new int;
    *pointer = 55; // using the dereference operator to write a number into this memory.

    delete pointer; // deleting memort we finished using. this pointer is pointing to dynamically allocated memory from the heap.
    pointer = nullptr; // returning memory to the system. 

    int* pointer_two{new int(25)};

    delete pointer_two;
    pointer_two = nullptr;
}