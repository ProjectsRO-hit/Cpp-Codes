/*You are given an array of integers and your job is to figure out the address of the smallest element , Nemo! For example, given

int data[] {11,2,52,53,9,13,5,7,12,11}
as the input , 2 is our Nemo and we should store his memory address in a pre-declared variable, min_address .
 Please know that for this exercise you should use pointer arithmetic notation and
 it's not allowed to go through array index notation like data[1] or data[i] to access stuff.*/

#include <iostream>

using namespace std;

int *minimum_address(int data[], unsigned int size)
{
    int *min_address = data; // Initialize min_address to the beginning of the array
    for (size_t i = 1; i < size; i++)
    {
        if (*(data + i) < *min_address) // Use pointer arithmetic to access array elements
        {
            min_address = (data + i); // Update min_address to the address of the current minimum value
        }
    }
    return min_address;
}

int main()
{
    int data[]{11, 2, 52, 53, 9, 13, 5, 7, 12, 11};
    int size = 10;
    int *ptr_address = minimum_address(data, size);
    std::cout << "The min_address is : " << ptr_address << " and the number is : " << *ptr_address << std::endl;
    return 0;
}
