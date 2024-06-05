/*You are given to C-String's. Your job is to concatenate the data, stitch a single space character in between and store the result in
an std::string. For example if your input is

    const char input1[] {"Hello there!"};
    const char input2[] {"How are you?"};
you should end up with the data

Hello there! How are you?

stored in an std::string variable called result.

There's a billion ways to do this and you are free in how you carry this out.
The important thing is that you end up with the correct data in the result std::string.
*/

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

std::string build_from_raw_pieces(const char *str1, const char *str2)
{
    size_t size1 = std::strlen(str1);
    size_t size2 = std::strlen(str2);
    size_t total = size1 + size2 + 2; // +1 for space and +1 for null terminator
    
    char store[total];
    store[0] = '\0'; // Initialize the store array with an empty string
    
    std::strcat(store, str1);
    std::strcat(store, " ");
    std::strcat(store, str2);
    
    std::string result(store);
    
    std::cout << result << std::endl;
    return result;
}

int main()
{
    const char input1[]{"Hello there!"};
    const char input2[]{"How are you?"};
    build_from_raw_pieces(input1, input2);
    return 0;
}
