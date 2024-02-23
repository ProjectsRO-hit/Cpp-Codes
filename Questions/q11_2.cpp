// - Implement a function to find the square root of a number without using the `sqrt` function.
#include <iostream>

double calculateSquareRoot(double x) {
    if (x < 0) {
        // Cannot calculate square root of a negative number
        std::cerr << "Error: Cannot calculate square root of a negative number." << std::endl;
        return -1.0; // Return an error value
    }

    // Initial guess for the square root
    double guess = x / 2.0;

    // Iterate until the guess is close enough
    while (abs(guess * guess - x) > 0.00001) {
        guess = 0.5 * (guess + x / guess);
    }

    return guess;
}

int main() {
    double number;
    std::cout << "Enter a number to find its square root: ";
    std::cin >> number;

    double result = calculateSquareRoot(number);

    if (result != -1.0) {
        std::cout << "The square root of " << number << " is: " << result << std::endl;
    }

    return 0;
}
