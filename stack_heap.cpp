#include <iostream>

int main() {
    // memory we can use if stack memory isnt enough for our purposes.
    // so far we've only been using memory that has lived on the stack.

    // stack memory is finite.
    // the developer isn't in full control of the memory lifetime.
    // lifetime is controlled by the scope mechanism.

    // heap memory is finite.
    // the developer is fully in control of when memory allocated and when it is released
    // lifetime is controlled explicitly through new and delete operations.

    // the variable comes to life on initialization. it dies when we hit the closing curly braces.
    // the lifetime of a variable is controlled by the scope mechanism. 

    // we can say new int to dynamically allocate memory. this new int memory will belong to you until you release this piece of memory.

    // when you do this, things are being stored on the heap rather than the stack.

    // stack variables are limited to curly brace scope. 
    // if you leave heap scope variable, the memory is still accessible until its returned.

    // delete keyword releases memory. 
    // initialize pointer with new int(), new piece of memory on the heap.

    // it is really bad to call delete twice on a pointer.

    int num = 55;
    int* p_num;
    p_num = &num;

    std::cout << p_num << std::endl;
    std::cout << *p_num << std::endl;

    // trying to write to an uninitialized pointer is undefined behavior.

    std::cout << "Hello World!" << std::endl;

    return 0;

}