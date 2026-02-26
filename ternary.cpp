#include <iostream>

int main() {

    int max{};
    int x{10};
    int y{10};

    max = (x > y) ? x : y;

    std::cout << max << std::endl;

    return 0;
}