// You'll write a C++ program that prompts the user to enter their location point (x, y) .
// The program will check whether the point is within the rectangle centered at (0, 0) with width of 20 and height 10.

#include <iostream>

using namespace std;
int main()
{
    int x_cor, y_cor;
    cout << "Please input X and Y cordinates of your location subsequently" << endl;
    cin >> x_cor >> y_cor;

    bool result = ((x_cor < 10) && (x_cor > -10) && (y_cor < 5) && (y_cor > -5)) ? 0 : 1;
    if (result == 0)
    {
        cout << "You are surrounded! Dont move!" << endl;
    }
    else
    {
        cout << "You are out of reaach!" << endl;
    }
    return 0;
}