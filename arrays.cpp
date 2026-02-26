#include <iostream>

int main() {
    // declaring an array

    int numbers[10];

    std::cout << numbers[0] << std::endl;

    numbers[1] = 555;

    for (size_t i{0}; i < 10; i++) {
        std::cout << numbers[i] << std::endl; // undefined behavior when the array is uninitialized.
    }

    for (size_t i{}; i < 10; i++) {
        numbers[i] = 50;
    }

    std::cout << "----------------------------------" << std::endl;

    for (size_t i{0}; i < 10; i++) {
        std::cout << numbers[i] << std::endl; // undefined behavior when the array is uninitialized.
    }

    double nums[20]{1, 2, 3, 4, 5}; // initializes the first 5 from the front, all other indices are initialized to zero.

    for (size_t i{}; i < 20; i++) {
        std::cout << nums[i] << std::endl;
    }

    int sum{0};

    // the 'enhanced for loop' in cpp
    for (auto elem : nums) {
        std::cout << elem << std::endl;
        sum += elem;
    }

    return 0;
}