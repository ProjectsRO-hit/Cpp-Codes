// Write a C++ program that takes two integers as input and checks whether the first number is greater than or equal to twice the second number.
// Display the result.

#include <iostream>

using namespace std;
int main()
{

    int a, b;
    cin >> a >> b;

    cout << boolalpha;
    cout << "Is a >= 2*b : " << (a >= 2*b) << endl;
    return 0;
}