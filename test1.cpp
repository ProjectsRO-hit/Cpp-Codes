#include <iostream>

int main()
{
    int number{2024};
    if (number % 4 == 0 && (number % 100 != 0 || number % 400 == 0))
    {
        std::cout << "A leap Year!" << std::endl;
    }
    else
    {
        std::cout << "Not a leap Year!" << std::endl;
    }
}