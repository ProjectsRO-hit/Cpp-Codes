#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    int number1 {45};
    int number2 {60};

    cout << "number 1 : " << number1 << endl;
    cout << "number 2 : " << number2 << endl;

    cout << endl;
    cout << "Comparing variables" << endl;

    cout << boolalpha;
    cout << "number1 < number 2 : " << (number1 < number2) << endl;
    cout << "number1 <= number 2 : " << (number1 <= number2) << endl;
    cout << "number1 > number 2 : " << (number1 > number2) << endl;
    cout << "number1 >= number 2 : " << (number1 >= number2) << endl;
    cout << "number1 == number 2 : " << (number1 == number2) << endl;

    cout << "number1 != number 2 : " << (number1 != number2) << endl;
    return 0;
}