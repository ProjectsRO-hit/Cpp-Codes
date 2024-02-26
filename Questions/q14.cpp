// Create a program that multiplies two int values,
//  intentionally causing an overflow. Implement a mechanism to detect overflow and print a message indicating that an overflow occurred.

#include <iostream>

using namespace std;
int main()
{
    int x{372881}, y{3828829};
    int z = x * y;

    cout << "Overflow: " << z << endl;

    return 0;
}