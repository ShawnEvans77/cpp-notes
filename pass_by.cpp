#include <iostream>

void add_one(int& x);

int main() {

    int y{};

    add_one(y);

    std::cout << y << std::endl;

    return 0;

}

void add_one(int& x) {
    x = x + 1;
}