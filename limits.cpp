#include <iostream>
#include <limits>

int main() {
    // numeric limits.

    // std::numeric_limits<T>::min()

    // tells you the given limit of the type. maximum or the minimum.

    std::cout << std::numeric_limits<int>::max() << std::endl; // tells you the integer limit.
    std::cout << std::numeric_limits<short>::max() << std::endl; // 32767
    std::cout << std::numeric_limits<long long>::max() << std::endl; // the big limit of long long.

    return 0;
}