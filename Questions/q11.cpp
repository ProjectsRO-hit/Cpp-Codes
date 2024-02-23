//  Write a C++ function to calculate the factorial of a given integer.
//    - Implement a function to find the square root of a number without using the `sqrt` function.

#include <iostream>

using namespace std;

void sqrt (int sq)
{
    int n {1}, count {0};
    int store = sq;
    while (sq > 0)
    {
        sq = sq - n;
        n+=2;
        count++;
    }
    cout << "The Sqrt of " << store << " is :" << count << endl;
}
int main()
{
    int fac, store;
    cout << "Input Number For Factorial: ";
    cin >> fac;
    store = fac;
    sqrt(fac);
    int faccal{1};

    while (fac > 0)
    {
        faccal = faccal * fac;
        fac--;
    }

    cout << "The factorial of " << store << " is : " << faccal << endl;
    return 0;
}