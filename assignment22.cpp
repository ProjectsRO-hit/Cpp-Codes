/*You are given an array of integers and your job is to figure out the address where the maximum element in the array lives. For example, given

int data[] {11,2,52,53,9,13,5,7,12,11};
as the input array , you code should figure out that 53 is the maximum and store its address in a variable. Given

int data[] {181,82,22,53,19,1,51,217,12,11};
as the input array, your code should figure out that 217 is the maximum and store its address in a specified variable.*/

#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    int data[]{11,2,52,53,9,13,5,7,12,11};
    int n = sizeof(data) / sizeof(data[0]);
    int *max_address{nullptr};
    int store{0};

    for (int i{0}; i < n; ++i)
    {
        if (data[i] > data[i + 1])
        {
            if (data[i] > store)
            {
                max_address = &data[i];
                store = data[i];
            }
        }
    }
    std::cout << "Highest snumber is : " << store << std::endl;
    std::cout << "Address of the Number is : " << max_address << std::endl;
    return 0;
}