// #include <iostream>
// #include <cmath>
// #include <iomanip>

// int main()
// {
//     const int width{4};
//     int counter1{0};
//     int midvar{8};
//     size_t a{0};
//     for (size_t y{0}; y < 8; y++)
//     {
//         for (size_t x{0}; x < 16; x++)
//         {
//             std::cout << std::setw(width) << " ";
//         }
//         for(size_t z{midvar-a}; z <= (midvar+a); z++)
//         {
//             std::cout << std::setw(width) << pow(2, counter1);
//         }
//         counter1++;
//         a++;
//         std::cout << std::endl;
//     }
//     return 0;
// }

#include <iostream>
#include <cmath>
#include <iomanip>

int main()
{
    const int width{4};
    const int mid_var = 8; 

    for (int row = 0; row < mid_var; row++)
    {
        for (int space = 0; space < (mid_var - row - 1); space++)
        {
            std::cout << std::setw(width) << " ";
        }
        for (int power = 0; power <= row; power++)
        {
            // std::cout << std::setw(width) << std::pow(2, power);
            std::cout << std::setw(width) << (power << 2);
        }
        for (int power = row - 1; power >= 0; power--)
        {
            std::cout << std::setw(width) << std::pow(2, power);
        }
        std::cout << std::endl;
    }

    return 0;
}
