// Create a constant integer and try to modify its value. Observe the compiler behavior.
//    - Define a constant double and use it in a mathematical expression.

#include<iostream>

int main()
{
    const int ab {564};
    // ab = 580; // cant modify a constant!

    const double x {35.597};
    int a {45}, b{86};
    auto sum = (b * x)+a; //implicit cast changed to double
    std::cout << "The sum is : " << sum << std::endl;
    std::cout << "The value of auto is : " << sizeof(sum) << std::endl;

 }