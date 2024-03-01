// - Use constinit to initialize a global variable and observe its behavior.
//    - Write a program with a constinit variable inside a function.

#include <iostream>

constinit int globalvar = 500;

void calc()
{
    // Attempting to declare a constinit local variable inside a function, which is not allowed
    // constinit int localvar = 42;

    // Instead, we use a regular const variable
    const int staticvar = 42;
    std::cout << "Local variable inside calc(): " << staticvar << std::endl;
}

int main()
{
    std::cout << "Global variable in main(): " << globalvar << std::endl;

    // Calling the calc function
    calc();

    return 0;
}
