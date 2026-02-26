#include <iostream>

int main() {
    // catching an exception for when an array allocated on the heap is way too big. 

    try {
        int* pointer = new int[500000000000];
    } catch (std::exception& e) {
        std::cout << "Exception Message: " << e.what() << std::endl;
    }

    // std no throw setting.

    int* pointer_2{new(std::nothrow) int[500000000000]};
    std::cout << "Ending Well" << std::endl; // heap is not infinite. we ran out with this bad allocation.

    return 0;
}