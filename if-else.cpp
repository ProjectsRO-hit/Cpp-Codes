#include<iostream>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE  // not part of code, used to beautify input and output
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int savings;
    cin>>savings;

    if(savings>5000) {
        cout<<"Neha\n";
    }else {
        cout<<"Rashmi\n";
    }
    return 0;
}