// Write a C++ program that takes a character as input and checks if it is a lowercase letter. Display the result.

#include <iostream>

using namespace std;
int main()
{

    char inp;
    cin >> inp;

    int a = inp;

    cout << boolalpha;
    cout << "Input in lowercase: " << (a >= 97 && a <= 122) << endl;
    return 0;
}