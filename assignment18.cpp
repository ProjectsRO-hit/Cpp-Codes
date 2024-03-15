// Your job is to take in an array of integers and figure out if it is sorted in incremental order or not.

// For example, if we have an input array

// int data[] {1,2,4,5,8,12,13,16,71,92};

// your code should figure out that the array (collection) is sorted in incrementing order.

// If we have an input array

// int data[] {1,112,4,5,8,12,13,16,71,92};

// your code should figure out that it is not sorted in incrementing order.

// You will store your result in a bool variable called sorted. If the collection is sorted, you'll store in a true,
// if the collection is not sorted you'll store in a false.

#include <iostream>

using namespace std;

int main() {
    int data[]{1, 112, 4, 5, 8, 12, 13, 16, 71, 92};
    int n = sizeof(data) / sizeof(data[0]);

    // Bubble sort algorithm
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (data[j] > data[j + 1]) {
                // Swap elements
                int temp = data[j];
                data[j] = data[j + 1];
                data[j + 1] = temp;
            }
        }
    }

    // Print sorted array
    cout << "Sorted Array: ";
    for (int i = 0; i < n; ++i) {
        cout << data[i] << " ";
    }
    cout << endl;

    return 0;
}

