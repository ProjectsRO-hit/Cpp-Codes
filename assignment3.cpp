// Area of a hexagon
// Your job is to compute the area of a hexagon whose side length is 6.7. Your code will go in the exercise.cpp file between the lines

#include <iostream>
#include <cmath>

using namespace std;
int main()
{

    double hex_area = ((3 * sqrt(3)) / 2) * pow(6.7, 2);
    cout << "Area of hexagon : " << hex_area << endl;
    return 0;
}