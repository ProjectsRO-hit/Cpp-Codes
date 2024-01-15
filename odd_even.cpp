#include <iostream>

using namespace std;
int main()
{
    int input;
    cin >> input;

    if (input % 2 == 0)
    {
        cout << "It's an even number\n"
             << endl;
    }
    else
    {
        cout << "It's an odd number\n"
             << endl;
    }
    return 0;
}