#include <iostream>
#include <cstring>

int main() {
    char x{'a'};

    std::cout << std::isalnum(x) << std::endl;
    std::cout << std::isblank(x) << std::endl;
    std::cout << std::isdigit(x) << std::endl;
    std::cout << std::toupper(x) << std::endl;

    char word[]{"hello world"};
    char other[]{"kitties"};

    std::cout << strcmp(word, other) << std::endl;
    std::cout << strlen(word) << std::endl; // gives us length of 11. 
    std::cout << sizeof(word) << std::endl;

    std::cout << strcat(word, other) << std::endl;
 
    return 0;
}