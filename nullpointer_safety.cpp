#include <iostream>

int main() {
    // checking if a nullptr is valid.
    int* pointer{};
    pointer = new int(6);

    if (pointer != nullptr) {
        std::cout << "the pointer points to a valid address." << std::endl;
        std::cout << *pointer << std::endl;
    } else {
        std::cout << "the pointer is the nullptr." << std::endl;
    }

    delete pointer;
    pointer = nullptr;

    return 0;
}