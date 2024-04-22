#include <iostream>
#include <bitset>
#include <iomanip>

const int Col_width{20};

int main()
{

    unsigned int value{0xCC01u};
    std::cout << std::setw(Col_width) << "Value = " << std::bitset<10>(value) << std::endl;
    std::cout << std::setw(Col_width) << "Value = " << std::dec << value << std::endl;
    // value <<= 2;
    value = (value << 2);
    std::cout << std::setw(Col_width) << "Value = " << std::bitset<10>(value) << std::endl;
    std::cout << std::setw(Col_width) << "Value = " << std::dec << value << std::endl;
    return 0;
}