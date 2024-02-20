// Create a C++ program that calculates the average of three test scores.
// Check if the average is greater than or equal to 70 and display the result in scientific notation with three decimal places.

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{

    double ts1, ts2, ts3;
    cin >> ts1 >> ts2 >> ts3;
    double avg = (ts1 + ts2 + ts3) / 3;

    cout << boolalpha;
    cout << "Average is >= 70 : " << (avg >= 70) << endl;
    cout << noboolalpha;
    cout << fixed << setprecision(3);
    cout << "avg : " << avg << endl;

    return 0;
}