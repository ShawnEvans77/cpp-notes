#include <iostream>

int main() {
    // if we have an expression, we need clear instructions for which operations to do first.
    // the rules we can follow to know which operator we do first.

    // multiplication and division come before addition and subtraction. 

    // precedence tells us which operation we can do.
    // associativty tells us in which direction we go, left or right. some operators are left/right associative. 

    // refer to the c++ operator precedence table to know which operators come first. 

    // the most important thing is to know what precedence and associativity are.
    // multiplication, division, modulus precedence is higher than addition and subtraction. 

    int a{5};
    int b{10};
    int c{30};

    std::cout << a + b * c << std::endl; //305. precedence says b times c comes first.

    // parantheses lets you be very specific on what values need to computed first. 
    // don't reply on the precedence table too much. make your intent clear using parantheses. 

    return 0;
}