#include <iostream>

using namespace std;

int sum(int a, int b)
{
    int summ = a + b;
    return summ;
}
int main()
{

    int num1{10};
    int num2{45};

    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;

    int s = sum(num1, num2);
    cout << "Sum of two numbers are: " << s << endl;

    return 0;
}