// Create a C++ program that asks the user to enter two boolean values (true or false). 
// Implement a logical AND operation on these values and display the result.

#include <iostream>
using namespace std;

int main() {
    int boolValue1, boolValue2;

    // Input: Prompt the user to enter two boolean values
    cout << "Enter the first boolean value (0 for false, 1 for true): ";
    cin >> boolValue1;

    cout << "Enter the second boolean value (0 for false, 1 for true): ";
    cin >> boolValue2;

    // Convert to boolean
    bool actualValue1 = boolValue1 != 0;
    bool actualValue2 = boolValue2 != 0;

    // Logical AND operation
    bool result = actualValue1 && actualValue2;

    // Output: Display the result
    cout << "Result of logical AND operation: " << boolalpha << result << endl;

    return 0;
}
