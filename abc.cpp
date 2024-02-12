#include<iostream>
using namespace std;
int main()
{
int x{0}, y{0};
y = ++x;
cout << y << endl;
cout << x << endl;
return 0;
}