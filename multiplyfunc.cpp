#include <iostream>

using namespace std;

int multiply(int a, int b)
{
    int summ = a * b;
    return summ;
}
int main()
{

    int num1{80};
    int num2{45};

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    int s = multiply(num1, num2);
    cout << "Multiplication of two numbers are: " << s << endl;

    return 0;
}