#include <iostream>
#include <bitset>

using namespace std;
int main()
{
    unsigned short xyz{4};       // declaring short
    // cout << bitset<16>(xyz) << endl; // printing value in binary
    // cout << showbase << hex << xyz << endl;
    // cout << showbase << dec << xyz << endl;
    // cout << showbase << oct << xyz << endl;

    // cout << endl;

    cout << "value : " << bitset<16>(xyz) << " ,dec : " << xyz << endl;

    //shifting left by 1
    xyz = static_cast<unsigned short> (xyz << 1);
    cout << "value after left shift by 1 : " << bitset<16>(xyz) << " ,dec : " << xyz << endl;

    return 0;
}