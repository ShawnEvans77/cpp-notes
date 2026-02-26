// this brings in the iostream library
#include <iostream>

int main() {
    // this is going to print hello world out to the console or the terminal.

    std::cout << "Hello World!" << std::endl;
    //endl writes a newline and flushes the stream. 
    //endl comes from the iostream library. 

    /*
    this is an example of a multiline comment.
    */

    // nesting isnt allowed. 
    std::cout << "hello";
    std::cout << "hello1" << std::endl;

    // is not going to be on different lines. 

    return 0; 
    // a way for the main function to send the message to the operating system if it finishes successfully
    // or if there was some kind of problem. 
    // this is why we do this 'return 0' thing. this is all we set out to do in this lecture. 
}