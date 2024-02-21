// Write a program that reads in the length and width and height of a box and computes the base area and volume using the following formulas:

//     base_area = width * length
//     volume = base_area * height

#include <iostream>

using namespace std;
int main()
{
    double length, width, height;
    cout << "Enter height : ";
    cin >> height;
    cout << "Enter width : ";
    cin >> width;
    cout << "Enter length : ";
    cin >> length;

    double base_area = width * length;
    double volume = base_area * height;

    cout << "Height : " << height << endl;
    cout << "Width : " << width << endl;
    cout << "Length : " << length << endl;
    cout << "Base Area : " << base_area << endl;
    cout << "Volume : " << volume << endl;

    return 0;
}