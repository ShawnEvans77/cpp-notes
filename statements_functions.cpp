#include <iostream>

int add_two_nums(int a, int b) {
    return a + b;
}

int main() {
    // a statement is a basic unit of computation in a c++ program. 
    // every c++ program is a collection of statements to achieve some kind of goal.

    // statements are executed from top to bottom in the order the program was run.
    // execution keeps going until there is a statement causing the program to terminate, or run another sequence of statements.

    // a function is like a machine. you give it input and it gives you output. 

    // we can consider the first number and second number as input to a function.

    // functions have a return type and function name.
    // functions have parameters.

    // a function must be defined BEFORE IT IS USED.

    int x = 35;
    int y = 40;

    // use variables, don't get magic numbers.

    int sum = add_two_nums(x, y);

    // we can define variables using statements.

    int first{3}; // curly braces. brace initialization.
    int second{5}; // this is brace initialization.

    std::cout << sum << std::endl;
    std::cout << add_two_nums(first, second) << std::endl;

}