// Your job is to write a loop (using a for loop construct) that sums up integers from 0 all the way to 99.
// The sum variable has been set up for you in the exercise.cpp file.
// You just have to figure out how to sum up all the integers from 0 up to 99 and store the result into the sum variable.

#include <iostream>

int main()
{
    int sum{};
    for (size_t x{}; x < 100; x++)
    {
        sum += x;
    }
    std::cout << "The sum till 0 to 99 is : " << sum << std::endl;
    return 0;
}