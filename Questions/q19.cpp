// Define a binary literal for the decimal number 42.
//    - Write a program using character literals to print your initials.

#include <iostream>
#include <bitset>

int main()
{
    unsigned int x  {42};
    std::cout << "Binary for decimal " << x << " is: " << std::bitset<16>(x) << std::endl;

    unsigned char c = {'s'};
    std::cout << "Binary Conversion of Character " << c << " is: " << std::bitset<16>(static_cast<int>(c)) << std::endl;
}

