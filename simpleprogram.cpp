#include<iostream>
using namespace std;

int main(){
    int amount1;
    cout<<"Enter amount received from User 1: "; 
    cin>>amount1;  // input from user

    int amount2;
    cout<<"Enter amount received from User 2: "; 
    cin>>amount2;

    int sum = amount1 + amount2;
    cout<<"The sum is:"; 
    cout<<sum;

    return 0;
}