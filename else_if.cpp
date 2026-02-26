#include <iostream>

int main() {
    // lets you test for several conditions. 

    int grade{77};

    if (grade >= 90) {
        std::cout << 'A' << std::endl;
    } else if (grade >= 80) {
        std::cout << 'B' << std::endl;
    } else if (grade >= 70) {
        std::cout << 'C' << std::endl;
    }

    return 0;
}