// Objective is to print your name 10 times

#include <iostream>

using namespace std;
int main()
{
    string s;
    cout << "Enter your Name\n";
    cin >> s;
    cout << "\n";
    for (int i = 0; i < 10; i++)
    {
        cout << s << endl;
    }

    return 0;
}