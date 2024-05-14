/* You are given two arrays of int . Your job is to merge them into a new larger array. For example if your two input arrays are

  int data1[] {1,2,3,4,5,66,77};

and   int data2[] {10,20,30,40,50,60};

Your code would merge them into a new array conveniently called new_array with the data

1 2 3 4 5 66 77 10 20 30 40 50 60

Once you have the new merged array, you'll print it out with std::cout exactly like

1 2 3 4 5 66 77 10 20 30 40 50 60

with elements separated by a single space and a single space after the last element.
The spacing we just described is important! If your code gets it wrong, our testing code will flag that as a problem. */

#include <iostream>

void merge_arrays(int data1[], int data2[], unsigned int size1, unsigned int size2)
{
    unsigned int size_combine = size1 + size2;
    int merge_data[size_combine];
    int *ptr3 = merge_data; // Pointer to the merged array

    int *ptr1 = data1; // Pointer to the first array
    int *ptr2 = data2; // Pointer to the second array

    unsigned int i = 0, j = 0, k = 0; // Counters for iterating through arrays

    // Merge arrays while there are elements left in both arrays
    while (i < size1 && j < size2)
    {
        if (data1[i] < data2[j])
            merge_data[k++] = data1[i++];
        else
            merge_data[k++] = data2[j++];
    }

    // Copy remaining elements of the first array, if any
    while (i < size1)
        merge_data[k++] = data1[i++];

    // Copy remaining elements of the second array, if any
    while (j < size2)
        merge_data[k++] = data2[j++];

    for (int i{0}; i < size_combine; ++i)
    {
        std::cout << merge_data[i] << " ";
    }
}

using namespace std;
int main()
{
    int data1[]{1, 2, 3, 4, 5, 66, 77};
    int data2[]{10, 20, 30, 40, 50, 60};

    unsigned int size_arr1{static_cast<unsigned int>(sizeof(data1) / sizeof(data1[0]))};
    unsigned int size_arr2{static_cast<unsigned int>(sizeof(data2) / sizeof(data2[0]))};

    merge_arrays(data1, data2, size_arr1, size_arr2);

    return 0;
}
