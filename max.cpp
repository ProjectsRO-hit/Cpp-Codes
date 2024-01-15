#include <iostream>

using namespace std;
int main()
{
    int a, b, c;
    cout << "Input three numbers one by one\n";
    cin >> a >> b >> c; // taking input of three numbers

    if (a > b && a > c)
    {
        cout << "A is greater than other two" << endl;
    }
    else if (b > c && b > a)
    {
        cout << "B is greater than other two" << endl;
    }
    else
    {
        cout << "C is greater than other two" << endl;
    }
    return 0;
}