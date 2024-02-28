#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    unsigned short xyz{60000};       // declaring short
    cout << bitset<16>(xyz) << endl; // printing value in binary
    cout << showbase << hex << xyz << endl;
    cout << showbase << dec << xyz << endl;
    cout << showbase << oct << xyz << endl;

    cout << endl;

    return 0;
}