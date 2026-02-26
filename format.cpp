#include <iostream>
#include <iomanip>

int main() {
    // formatting the output.
    // there are a lot of std iomanip objects.

    // std::flush - causes immediate sending of data to the device connected to the stream.
    // suppose we have std::cout and we wanted to print to this terminal.

    // data goes into a buffer before going into the terminal. when the data is full, the data will be sent to the terminal
    // in one go

    // std::setwidth - set the width of text going into the terminal

    std::cout << std::setw(20) << "hello world" << std::endl; // sets the stream to have a width of 20.

    // setprecision, setfill, showpoint, fixed, scientific
    // std::flush for sending an output to the stream.

    // std::dec, std::octal

    return 0;
}