// Develop a C++ program that calculates the value of π (pi) using the constant in the <cmath> library.
//  Display the result with eight decimal places.

#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;
int main(){
    
    cout << setprecision(8);
    cout << "Value of pi : " << M_PI << endl;
    return 0;
}