#include <iostream>

// you can only have one definition of a variable
double weight{};

typedef struct Point {
    int x;
    int y;
};

int main() {
    struct Point cat{5, 3};

    std::cout << cat.y << std::endl;

    return 0;
}