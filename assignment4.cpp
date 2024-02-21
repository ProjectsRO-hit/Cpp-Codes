// Write a C++ program that reads in Celsius degree data from the terminal with std::cin and stores that in a double variable.
// The program then converts that to Fahrenheit and prints out a message like 50.2 Celsius is 122.36 Fahrenheit .
// The formula to convert from Celsius to Fahrenheit is fahrenheit = (9.0 / 5) * celsius + 32 .

// Please note that we are doing (9.0 / 5)  and not (9/ 5) .
// (9 / 5) would do integer division and we would loose fractional data that we need for the conversion to work properly.

#include <iostream>

using namespace std;
int main()
{
    double Celsius;
    cout << "Please enter the temperature in Celsius : " << endl;
    cin >> Celsius;

    double conv = (9.0 / 5) * Celsius + 32;
    cout << Celsius << " Celsius is " << conv << " Fahrenheit" << endl;
    return 0;
}