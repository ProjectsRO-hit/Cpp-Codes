/*Your job is to write a do while loop that prints multiples of 19 in the range starting from 100 up to 1000 .
The multiples of 19 should be separated by a single space and there should be a single space after the last one.

So when you spot a multiple of 19, you would print it using a statement like

std::cout << multiple_of_19 << " ";*/

#include <iostream>

using namespace std;

int main()
{
    int x{100};
    do
    {
        if (x % 19 == 0)
        {
            cout << x << " "; 
        }
        x++;
    } while (x < 1001);

    return 0;
}