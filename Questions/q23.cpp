// - Implement a C++ function to calculate the power of a number (x^n) without using the `pow` function.
//    - Create a function that calculates the greatest common divisor (GCD) of two numbers using Euclid's algorithm.

#include <iostream>

using namespace std;

int pow(int num, int pow)
{
    int result = 1;
    for (int y = 0; y < pow; y++)
    {
        result = result * num;
    }
    return result;
}

int main()
{
    int number;
    int power;
    cout << "Please enter number and its power one by one!" << endl;
    cin >> number >> power;

    int result = pow(number, power);
    cout << "The power of " << number << "^" << power << " is: " << result << endl;

    return 0;
}
