// Leap Years

// Your job is to write code to check if a given year is leap or not. If you don't know what a leap year is, please use your favorite search engine to figure that out! Once you know what it is, then you'll head into the exercise.cpp file and write your code within the comments

//         //Don't modify anything above this line
//         //Your code goes below this line

//         //Your code goes above this line
//         //Don't modify anything below this line

// Your code will grab the value in a variable called year. Within the comments you'll assume that that variable is available to you and you'll just use it. You will check if the year is a leap year. If it's a leap year, you'll store a true in the is_leap bool variable, if it's not a leap year, you'll store a false in the is_leap bool variable.

// Once you have your code ready you can click on the check solution button to see if you got this right. Please try your best to do this on your own. If after really trying you'll still stuck, you can click on the solution.txt file to see our reference solution and learn as much as you can from it.

#include <iostream>
using namespace std;

int main()
{
    bool is_leap{};
    int year{};

    cout << "----------Leap Year Finder------------" << endl;
    cout << "Enter the year to check if it's a Leap Year or not!" << endl;
    cin >> year;

    // is_leap = (year % 4 == 0);
    if (year > 0)
    {

    is_leap = (year % 4 == 0) && (year % 100 != 0 || year % 400 == 0);

    if(is_leap)
    {
        cout << year << " is a Leap Year" << endl;
    }
    else {
        cout << year <<" is not a Leap Year" << endl;
    }
    }
    else {
        cerr << "Error! a year cant be 0 or less than it!" << endl;
    }

    return 0;
}