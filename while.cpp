#include <iostream>

int main() {
    size_t i{};
    size_t COUNT{10};

    while (i < COUNT) {
        std::cout << i << std::endl;
        i++;
    }

    std::cout << "Loop concluded!" << std::endl;
    return 0;
}