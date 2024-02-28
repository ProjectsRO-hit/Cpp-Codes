// How can you convert an integer to its binary representation in C++ without using any libraries or built-in functions?

#include <iostream>

void intToBinary(int num) {
    // Size of an integer in bits
    int size = sizeof(int) * 8;

    // Loop through each bit
    for (int i = size - 1; i >= 0; --i) {
        // Use bitwise shift to check each bit
        int bit = (num >> i) & 1;
        std::cout << bit;
    }

    std::cout << std::endl;
}

int main() {
    int number;

    // Input from the user
    std::cout << "Enter an integer: ";
    std::cin >> number;

    std::cout << "Binary representation: ";
    intToBinary(number);

    return 0;
}
