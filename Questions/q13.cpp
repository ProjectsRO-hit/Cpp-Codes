// Explicit Data Conversion:

// Implement a program where you read a double value from the user,
//  convert it explicitly to an int, and then print both the original double and the converted int values.

#include <iostream>

using namespace std;
int main()
{

    double read;
    cin >> read;

    cout << "Double input Value: " << read << endl;
    cout << "After Explicit Data Conversion: " << static_cast<int>(read) << endl;
    return 0;
}