// Write a program that involves operations between int and double variables.
//  Ensure that the final result is of the double type. Print both the intermediate and final results.

#include <iostream>

using namespace std;
int main()
{
    double a{54.6743};
    int x = 373;

    auto l = x * a;
    cout << l << endl;
    return 0;
}