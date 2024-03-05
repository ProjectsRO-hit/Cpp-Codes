// Please write a program that prompts the user to type in a integral value and checks whether the value is even or odd
#include <iostream>

using namespace std;
int main()
{
    int value;
    cout << "Please input a value to check if its even or odd!" << endl;
    cin >> value;
    string s = (value % 2 == 0) ? "Even" : "Odd";
    cout << "value is " << s << endl;
    return 0;
}