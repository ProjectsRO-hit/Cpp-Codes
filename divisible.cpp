/*Here we write a loop ranging from 1 to 100 and we will not print the numbers which is divisible by 3
Using continue and break*/

#include <iostream>

using namespace std;
int main()
{
    for (int i = 0; i < 100; i++)
    {
        if (i % 3 == 0)
        {
            continue;
        }
        cout << i << endl;
    }
    return 0;
}