#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    unsigned short x{45};
    unsigned short y{42};
    cout << bitset<16>(x) << endl;
    cout << bitset<16>(y) << endl;
    cout << sizeof(x)<<endl;

    x = static_cast<unsigned short int>(x >> 4);
    cout << bitset<16>(x) << endl;
    cout << x << endl;
    return 0;
}