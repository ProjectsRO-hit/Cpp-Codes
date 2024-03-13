#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    const int width{4};
    int counter1{0};
    int midvar{8};
    for (size_t y{0}; y < 8; y++)
    {
        for (size_t x{0}; x < 16; x++)
        {
            if (x == midvar)
            {
                std::cout << std::setw(width) << pow(2, counter1);
            }
            else
            {
                std::cout << std::setw(width) << " ";
            }
        }
        counter1++;
        std::cout << std::endl;  
    }
    return 0;
}
