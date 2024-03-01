// 4.Develop a program where you perform a division operation with two int values, causing an underflow condition.
//  Check for underflow and print a message if it occurs.

#include<iostream>
using namespace std;
int main()
{
    unsigned short int f1 {561}; unsigned short int f2 {900};
    unsigned short sum = f1 - f2; //underflow

    cout << sum << endl;
    return 0;
}