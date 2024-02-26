// Write a program that involves the implicit conversion of a float to an int.
// Ensure that the program prints both the original float value and the converted int value.

#include <iostream>

using namespace std;
int main()
{
    float f{35.67f};
    int x = 165;

    cout << "Float: " << f << endl;
    cout << "Int: " << x << endl;
    //implicit data conversion
    float sum = f + x;
    cout << "sum: " << sum << endl;
    return 0;
}