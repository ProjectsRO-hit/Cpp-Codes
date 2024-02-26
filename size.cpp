#include <iostream>
#include <limits>

int main() {
    std::cout << "Size of char: " << sizeof(char) << " bytes\n";
    std::cout << "Size of short: " << sizeof(short) << " bytes\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes\n";
    std::cout << "Size of long: " << sizeof(long) << " bytes\n";
    std::cout << "Size of long long: " << sizeof(long long) << " bytes\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes\n";
    std::cout << "Size of long double: " << sizeof(long double) << " bytes\n";
    
    std::cout << "Minimum value for char: " << std::numeric_limits<char>::min() << '\n';
    std::cout << "Maximum value for char: " << std::numeric_limits<char>::max() << '\n';
    std::cout << "Minimum value for short: " << std::numeric_limits<short>::min() << '\n';
    std::cout << "Maximum value for short: " << std::numeric_limits<short>::max() << '\n';
    std::cout << "Minimum value for int: " << std::numeric_limits<int>::min() << '\n';
    std::cout << "Maximum value for int: " << std::numeric_limits<int>::max() << '\n';
    std::cout << "Minimum value for long: " << std::numeric_limits<long>::min() << '\n';
    std::cout << "Maximum value for long: " << std::numeric_limits<long>::max() << '\n';
    std::cout << "Minimum value for long long: " << std::numeric_limits<long long>::min() << '\n';
    std::cout << "Maximum value for long long: " << std::numeric_limits<long long>::max() << '\n';
    std::cout << "Minimum value for float: " << std::numeric_limits<float>::min() << '\n';
    std::cout << "Maximum value for float: " << std::numeric_limits<float>::max() << '\n';
    std::cout << "Minimum value for double: " << std::numeric_limits<double>::min() << '\n';
    std::cout << "Maximum value for double: " << std::numeric_limits<double>::max() << '\n';
    std::cout << "Minimum value for long double: " << std::numeric_limits<long double>::min() << '\n';
    std::cout << "Maximum value for long double: " << std::numeric_limits<long double>::max() << '\n';

    return 0;
}
