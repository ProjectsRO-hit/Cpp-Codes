/* Write a C++ program that asks which country the user lives in, lets the user type in the country and  and prints out a message

I've heard great things about [Country]. I'd like to go there sometime.


Example run :

Program prints : Where do you live?

User types : Finland

Program prints : I've heard great things about Finland. I'd like to go sometime.

*/
#include <iostream>
#include <string.h>

using namespace std;
int main()
{

    string input;
    cout << "Hey there! Where do you live?" << endl;
    getline(cin, input); // fixing space issues for places/counties/continents which have more than 1 name! i.e. North America
    // cin >> input;

    cout << "Wow " << input << "! That's a really good place to live in, I would love to visit there!!" << endl;

    return 0;
}