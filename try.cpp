#include <iostream>
#include <iomanip>
#include <bitset>

int main()
{

	const int Col_width(30);

	const unsigned int bit0{0b00000001};
	const unsigned int bit1{0b00000010};
	const unsigned int bit2{0b00000100};
	const unsigned int bit3{0b00001000};
	const unsigned int bit4{0b00010000};
	const unsigned int bit5{0b00100000};
	const unsigned int bit6{0b01000000};
	const unsigned int bit7{0b10000000};

	unsigned int c1{0b00000000};

	// setting up bit postition 0

	std::cout << "Setting Bit 1:" << std::setw(Col_width) << std::bitset<8>(c1 |= bit0) << std::endl;

	// setting up bit postition 3

	std::cout << "Setting Bit 4:" << std::setw(Col_width) << std::bitset<8>(c1 |= bit3) << std::endl;

	// resetting bit 0

	std::cout << "Resetting bit 0:" << std::setw(Col_width) << std::bitset<8>(c1 &= (~bit0)) << std::endl;

	// checking state of a bit

	std::cout << "Bit 0 is: " << ((c1 & bit1) >> 0) << std::endl;
	std::cout << "Bit 3 is: " << ((c1 & bit3) >> 3) << std::endl;
	std::cout << "Bit 3 is: " << static_cast<bool>(c1 & bit3)<< std::endl;

	return 0;
}