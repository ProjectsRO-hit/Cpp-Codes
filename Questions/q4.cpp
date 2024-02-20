// Develop a C++ program that takes three integers as input and checks if the sum of the first two numbers is greater than the third number.
// Also, check if at least one of the numbers is positive. Display the results.

#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << boolalpha;
    cout << " (a + b) > c: " << ((a+b) > c) << endl;
    cout << noboolalpha;
    cout << showpos;
    cout << " a : " << a << endl;
    cout << " b : " << b << endl;
    cout << " c : " << c << endl;
    return 0;
}