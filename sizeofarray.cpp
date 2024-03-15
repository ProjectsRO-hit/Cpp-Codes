#include<iostream>

using namespace std;
int main(){
    int arr1 [] {12, 78, 89, 56, 7, 97, 65, 64, 41, 765, 765, 819};
    int count {std::size(arr1)};
    cout << " The size of array using method 1 is : " << count << endl;

    int count2 {sizeof(arr1)/ sizeof(arr1[0])};
    cout << " The size of array using method 2 is : " << count << endl;

    return 0;
}