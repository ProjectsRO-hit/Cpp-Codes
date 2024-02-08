#include <iostream>
#include <string.h>

using namespace std;
int main()
{

    string fullname;
    cout << "Please enter your Full name: " << endl;
    getline(cin, fullname);

    cout << "Your Full name is: " << fullname << endl;
    return 0;
}