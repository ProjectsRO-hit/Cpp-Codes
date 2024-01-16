#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;

    int sum = 0;
    for (int counter = 1; counter <= n; counter++)
    {
        sum = sum + counter;
        cout << "Hello World!" << endl;
    }
    cout << sum << endl;
    return 0;
}