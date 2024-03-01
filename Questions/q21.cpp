// Write a constexpr function to calculate the nth Fibonacci number.
//    - Declare an array with a size determined at compile-time using constexpr.

#include <iostream>

constexpr unsigned long long fibonacci(const int n) {
    return (n <= 1) ? n : (fibonacci(n - 1) + fibonacci(n - 2));
}

int main() {
    constexpr int n = 10;  // Change this value to calculate a different Fibonacci number
    constexpr char a {'a'};

    constexpr unsigned long long result = fibonacci(n);

    std::cout << "The " << n << "th Fibonacci number is: " << result << std::endl;
    std::cout << "Value of constexpr char is :" << a << std::endl;

    return 0;
}
