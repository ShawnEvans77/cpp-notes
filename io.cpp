#include <iostream>
#include <string>

int main() {
    // std::cout is a highway that goes from your terminal to your program

    // std::cout - prints to the console
    // std::cin - reads data from the terminal
    // std::cerr - prints errors from the console
    // std::clog - prints log messages to the console.

    // different programs might decide to format these log messages differently.

    std::cout << "Hello World!" << std::endl;

    int age1;
    std::string name;

    std::cout << "Please type your name and age." << std::endl;

    // input operator.

    std::getline(std::cin, name);
    std::cin >> age1;

    std::cout << "Hello " << name << " you are " << age1 << " years old! ";
}