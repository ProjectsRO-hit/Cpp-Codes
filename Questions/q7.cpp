// Develop a C++ program that calculates the square root of a given floating-point number. Display the result with four decimal places.

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{

    float a;
    cin >> a;

    cout << setprecision(4);
    cout << "Square root of " << a <<" is : " << sqrt(a) << endl;
    return 0;
}