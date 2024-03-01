//  - Explore the limits of `intmax_t` and `uintmax_t` in your system.
//    - Create a program that swaps two integers without using a temporary variable.

#include <iostream>
#include <limits>
#include <cstdint>

using namespace std;

int main() {
    // Explore the limits of intmax_t and uintmax_t
    cout << "The minimum value of intmax_t is: " << numeric_limits<intmax_t>::min() << endl;
    cout << "The maximum value of intmax_t is: " << numeric_limits<intmax_t>::max() << endl;
    cout << "The minimum value of uintmax_t is: " << numeric_limits<uintmax_t>::min() << endl;
    cout << "The maximum value of uintmax_t is: " << numeric_limits<uintmax_t>::max() << endl;

    // Swap two integers without using a temporary variable
    int a = 5, b = 10;

    cout << "Before swapping: a = " << a << ", b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}
