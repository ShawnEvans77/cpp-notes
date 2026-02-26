#include <iostream>

int main() {
    // arrays have bounds
    // c++ lets you edit array indices that are way out of bounds.

    int nums[]{1,2,3,4,5,6};

    std::cout << nums[12] << std::endl;

    nums[12] = 344; // this is very bad. manipulating data out of bounds.
    // C++ allows you to do this.

    // don't go overbounds make sure you are working within the legal boundaries of your array.

    return 0;
}