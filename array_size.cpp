#include <iostream>

int main() {
    // query for the size of the array at runtime.
    int A[]{1,2,5};

    for (auto a : A) {
        std::cout << a << std::endl;
    }

    std::cout << "--------------------" << std::endl;
    std::cout << sizeof(A) << std::endl; // array is size 12 cause 4 bytes times 3 ints
    std::cout << sizeof(A) / sizeof(A[0]) << std::endl; // this is a way to get the count of elements in the array.
    std::cout << std::size(A) << std::endl; // c++17 way

    return 0;
}