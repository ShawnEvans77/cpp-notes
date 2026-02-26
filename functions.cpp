#include <iostream>
#include "Cat.h"

int add(int x, int y);
int max(int x, int y);

int main() {
    std::cout << add(5, 10) << std::endl;

    Cat amber{"amber", 55};

    std::cout << amber.get_age() << std::endl;
    std::cout << max(5, 121) << std::endl;

    return 0;
}

// return type, function name, parameters
int add(int x, int y) {
    return x + y;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}