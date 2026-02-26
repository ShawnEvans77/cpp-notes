#include <iostream>

int main() {
    // different ways you can declare arrays. you can declare them dynamically.

    // std::size doesn't work on dynamically allocated arrays.

    int *arr{new(std::nothrow) int[5]};
    arr[0] = 50;
    std::cout << arr[0] << std::endl;

    delete [] arr;
    arr = nullptr;

    // static arrays vs dynamic arrays

    int scores[] {1, 2, 3, 4, 5, 6, 8, 9}; // array on the static

    for (auto x : scores) {
        std::cout << x << std::endl;
    }

    // the way we did it before is a dynamically allocated array. 
    // arr is just a pointer, it is not really an array. you cannot loop through it.

    return 0;
}