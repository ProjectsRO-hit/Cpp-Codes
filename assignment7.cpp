// There's a medical treatment that is only applicable if your age is between 21 and 39 inclusive (21 and 39 are included in the range) .
//  Your task as a C++ developer is to write a program that checks whether the user is eligible for the treatment.

#include <iostream>

using namespace std;
int main()
{
    int age;
    cout << "--Input age for eligibility--" << endl;
    cin >> age;

    if (age == 0 || age < 0)
    {
        cerr << "Invalid age! Please Try again!" << endl;
    }
    else
    {
        string s = (age >= 21 && age <= 39) ? "eligible" : "not eligible";
        cout << "The patient is " << s << " for Treatment" << endl;
    }
    return 0;
}