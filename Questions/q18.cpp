//  Declare a variable with the weirdest integral type possible and assign it a value.
//    - Create a program that demonstrates the overflow behavior of integer types.

#include <iostream>

int main() {
    signed char a = 127;  // Maximum value for signed char
    signed char b = 1;

    std::cout << "Initial values: a = " << static_cast<int>(a) << ", b = " << static_cast<int>(b) << std::endl;

    // Overflow occurs here
    signed char sum = a + b;

    std::cout << "Sum before overflow: " << static_cast<int>(sum) << std::endl;

    // Overflow occurs here
    sum++;

    std::cout << "Sum after overflow: " << static_cast<int>(sum) << std::endl;

    return 0;
}
