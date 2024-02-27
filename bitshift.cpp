#include <iostream>
#include <bitset>


int main(){

	unsigned int value {0xCC01u};

	std::cout << "Size of short int " << sizeof(short int) <<  std::endl;//  16 bits
	
    std::cout << "value : " << std::bitset<20>(value) 
    << ", dec : " << value << std::endl;

    for (int i = 0; i<5; i++)
    {

    //Shift left by one bit
    value = static_cast<unsigned int>(value << 1);
    std::cout << "value : " << std::bitset<20>(value) 
    << ", dec : " << value << std::endl;
    }

    return 0;
}