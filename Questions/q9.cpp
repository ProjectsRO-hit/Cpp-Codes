// Write a C++ program that takes an integer as input and checks if it is a multiple of 5 but not a multiple of 3. Display the result.

#include<iostream>

using namespace std;
int main(){
    
    int a;
    cin >> a;

    cout << boolalpha;
    cout << "Whether number is multiple of 5 and not a multiple of 3 : " << (a % 5 == 0 && a % 3 != 0 ) << endl;
    return 0;
}