/*Given two input arrays of int with a size of 10 (each element shows up only once in the array), for example,

      int data1[] {1,2,4,5,9,3,6,7,44,55};
      int data2[] {11,2,44,45,49,43,46,47,55,88};

Your job is to write code that identifies common elements in these two collections and prints a message like

There are 3 common elements they are : 2 44 55 with a single space after the last common element. (The single space is crucial for your code to pass our tests).

If there are no common elements between the arrays, for example our input arrays contain the data below

      int data1[] {1,2000,4,5,9,3,6,7,4400,5500};
      int data2[] {11,2,44,45,49,43,46,47,55,88};

your code will then print a message :

There are 0 common elements . This time there's no space after elements in the message. Please note that the assumed size for the arrays is 10.
*/

#include <iostream>

using namespace std;

int main()
{
    int data1[]{1, 2, 4, 5, 9, 3, 6, 7, 44, 55};
    int data2[]{11, 2, 44, 45, 49, 43, 46, 47, 55, 88};
    int datastore[10];
    int count{0};

    for (int i{0}; i < 10; i++)
    {
        for (int j{0}; j < 10; j++)
        {
            if (data1[i] == data2[j])
            {
                datastore[count] = data1[i];
                count++;
            }
        }
    }

    std::cout << "The common elements are : ";
    for (int i = 0; i < count; i++)
    {
        std::cout << datastore[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
