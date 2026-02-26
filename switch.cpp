#include <iostream>

int main() {
    // switch - an alternative way to do what we did with those else if clauses.

    int number{54};

    // switch conditions have to be integral types or an enum. 

    switch (number) {
        case 20: 
            std::cout << "the number is 20." << std::endl;
            break;
        case 10:
            std::cout << "the number is 10." << std::endl;
            break;
        case -1:
            std::cout << "the number is -1." << std::endl;
            break;
        default:
            std::cout << "the number was not in the switch case." << std::endl;
            std::cout << "it didn't match 20, 10, or -1." << std::endl;
            break;
    }

    return 0;
}