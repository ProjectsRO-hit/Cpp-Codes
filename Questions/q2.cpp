// Create a C++ program that asks the user to enter their age.
// Check if the age is between 18 and 30 (inclusive) and if it is divisible by 3. Display a message accordingly.

#include <iostream>

using namespace std;
int main()
{

    int age;
        cin >> age;

    cout << boolalpha;
    cout << "Is age Between 18 and 30 and divisible by 3 or not : " << (age >= 18 && age <= 30 && age % 3 == 0) << endl;

    return 0;
}
