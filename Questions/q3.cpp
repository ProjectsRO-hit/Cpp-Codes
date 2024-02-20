// Write a C++ program that calculates the area of a rectangle using the formula Area=length×widthArea=length×width. 
//Display the result with exactly two decimal places
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double length, width;
    cin >> length >> width;

    double area = length * width;

    cout << setprecision(4);
    cout << area << endl;
    return 0;
}