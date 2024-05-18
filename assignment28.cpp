/* You are given an array of characters as input and your job is to find spaces in the array and replace them with underscore characters.
 Fro example, the input array is

char message[] {"The sky is blue my friend."};

your code should modify it, store the result in an array pointed to by the char pointer conveniently called result in your code (details to follow).
 You will then print the result exactly in the format :

After replacing the spaces, we get : The_sky_is_blue_my_friend.

using std::cout . Please note that there is no new line character after the the string you print.
If you put one, our test code will flag that as a problem. */

#include <iostream>
#include <cstring>

using namespace std;

// void replace_spaces(char data[], unsigned int size)
// {
//     for (size_t i{0}; i < size; ++i)
//     {
//         if (data[i] == ' ')
//         {
//             data[i] = '_';
//         }
//     }

//     for (size_t i{0}; i < size; ++i)
//     {
//         std::cout << data[i];
//     }
//     std::cout << std::endl; // Add newline for better readability
// }

void replace_spaces(char data[], unsigned int size)
{

    char *result{nullptr};

    result = new char[size]; // Allocate the array from the heap
    for (unsigned int i{}; i < size; ++i)
    {

        if (std::isspace(data[i]))
        {
            result[i] = '_';
        }
        else
        {
            result[i] = data[i];
        }
    }

    std::cout << "After replacing the spaces, we get : "
              << result;

    // Remember to release the memory. Be a good C++ citizen.
    delete[] result; // Release the memory for the dynamic array. DON'T FORGET
}

int main()
{
    char message[] = "Hello! How are you my man, Hope you are well.";
    unsigned int size_arr1 = static_cast<unsigned int>(strlen(message)); // Use strlen to get the length excluding the null terminator

    replace_spaces(message, size_arr1);
    return 0;
}