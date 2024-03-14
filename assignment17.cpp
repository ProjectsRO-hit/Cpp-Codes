// Eliminating duplicates

// Your are given an array of size collection_size, containing integers, potentially including duplicates. An example is

// int data[] {1,2,4,5,1,8,2,3,6,1,4,2};

// Your job is to write code that eliminates duplicates and print a message exactly like

// The collection contains 7 unique numbers, they are : 1 2 4 5 8 3 6

// with a single space after the last element, in this case, a space after the 6. Please note that the message you print has to be exactly
//  formatted like the above one, just adapted for any collection your code is given as input.  For example,

// for an input of int data[] {12,3,21,3,8,2,21,4,3} your code should print The collection contains 6 unique numbers, they are : 12 3 21 8 2 4

// for an input of int data[] {7,5,7,2,4,1,7,4,2} your code should print The collection contains 5 unique numbers, they are : 7 5 2 4 1 .

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int arr[]{1, 2, 5, 3, 1, 6, 4, 7, 3, 5, 7, 2, 3, 53, 24, 23, 52, 53};
    int arr2[100]{}; // Assuming maximum possible unique elements as 100
    int count = 0;
    
    for (int x : arr)
    {
        bool found = false;
        for (int y : arr2)
        {
            if (x == y)
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            arr2[count++] = x;
        }
    }

    cout << "The collection contains " << count << " unique numbers, they are : ";
    for (int i = 0; i < count; ++i)
    {
        cout << arr2[i] << " ";
    }
    cout << endl;

    return 0;
}
