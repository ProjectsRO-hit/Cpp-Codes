// You'll write a C++ console program that lets the user type in a day 1 : Monday,..., 7 : Sunday].
//  If the day is valid (between 1 and 7) we say which day it is,
// otherwise we print an error message saying the day is invalid and terminate the program

#include <iostream>

using namespace std;
int main()
{

    int day;
    cout << "Which Day is Today? Press 1: Monday, 2: Tuesday ...... 7: Sunday" << endl;
    cin >> day;

    switch (day)
    {
    case 1:
        cout << "Today is Monday. Let's have some fun!" << endl;
        break;

    case 2:
        cout << "Today is Tuesday. Let's have some fun!" << endl;
        break;

    case 3:
        cout << "Today is Wednesday. Let's have some fun!" << endl;
        break;

    case 4:
        cout << "Today is Thursday. Let's have some fun!" << endl;
        break;

    case 5:
        cout << "Today is Friday. Let's have some fun!" << endl;
        break;

    case 6:
        cout << "Today is Saturday. Let's have some fun!" << endl;
        break;

    case 7:
        cout << "Today is Sunday. Let's have some fun!" << endl;
        break;

    default:
        cerr << "Invalid input!" << endl;
        break;
    }

    return 0;
}