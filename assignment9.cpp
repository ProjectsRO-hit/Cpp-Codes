// You'll write a program that lets the user type in the current day [1 : Monday,..., 7 : Sunday], and a day difference.
// Your program will then go that day difference in the past and say which day of the week we hit.

#include <iostream>

using namespace std;

int main()
{
    int day;
    cout << "Which day is today? Press 1: Monday, 2: Tuesday... 7: Sunday!" << endl;
    cin >> day;

    if (day < 1 || day > 7)
    {
        cerr << "Invalid Input! Bye!" << endl;
    }
    else
    {
        int past;
        cout << "How many days have passed up to Today?" << endl;
        cin >> past;

        // Zeller's Congruence algorithm
        int resultDay = (day - (past % 7) + 7) % 7;

        switch (resultDay)
        {
        case 1:
            cout << "The day " << past << " days ago was Monday." << endl;
            break;
        case 2:
            cout << "The day " << past << " days ago was Tuesday." << endl;
            break;
        case 3:
            cout << "The day " << past << " days ago was Wednesday." << endl;
            break;
        case 4:
            cout << "The day " << past << " days ago was Thursday." << endl;
            break;
        case 5:
            cout << "The day " << past << " days ago was Friday." << endl;
            break;
        case 6:
            cout << "The day " << past << " days ago was Saturday." << endl;
            break;
        case 7:
            cout << "The day " << past << " days ago was Sunday." << endl;
            break;
        default:
            break;
        }
    }

    return 0;
}
