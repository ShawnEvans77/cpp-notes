#include <iostream>

int main() {

    size_t i{};
    size_t COUNT{10};

    do {
        std::cout << COUNT << std::endl;
        COUNT++;
    } while (COUNT < 20);

    return 0;
}