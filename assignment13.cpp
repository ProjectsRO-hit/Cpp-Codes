// Write a code using ranged based for loops to filter the numbers in an array which ae divisible by 3.


#include<iostream>
#include<vector>

using namespace std;

int main(){

 std::vector<int> numbers {1,21,4,5,7,3,9,3,5,17,15};
 for ( auto n : numbers)
 {
    if ( n % 3 == 0)
    {
        cout << n;
        cout << " ";
    }
 }
    return 0;
}