/* You are given an array of characters. For example

 char message[] {"John was 8 years old at the time."};

and your job is to figure out how many vowels and how many consonants there are in the string.
Once you have those numbers, you'll print a message exactly like

The string contains 9 vowels and 15 consonants

using std::cout. Please note that there is no new line character after the message. If you put one, our testing code will flag that as a problem.

As an other example, if the input array is

 char message[] {"The sky is blue my friend."};

your code should print

The string contains 6 vowels and 14 consonants

The input string could really contain anything, characters, numbers, special characters, upper case and lower case,
and your code should be able to handle that. For simplicity , we will limit the input characters to English characters ,
 numbers and other special symbols like "*", "^", basically things you can see on your keyboard. */

#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

void find_stuf_out(const char data[], unsigned int size)
{
    unsigned int vowel_count = 0;
    unsigned int consonant_count = 0;
    char restructured_data[size + 1];  // +1 for null terminator

    unsigned int j = 0;
    for (size_t i = 0; i < size; ++i)
    {
        if (std::isalpha(data[i]))
        {
            restructured_data[j] = std::tolower(data[i]);
            j++;
        }
    }
    restructured_data[j] = '\0';  // Null-terminate the string

    for (size_t i = 0; i < j; ++i)
    {
        if (restructured_data[i] == 'a' ||
            restructured_data[i] == 'e' ||
            restructured_data[i] == 'i' ||
            restructured_data[i] == 'o' ||
            restructured_data[i] == 'u')
        {
            vowel_count++;
        }
        else
        {
            consonant_count++;
        }
    }

    cout << "The string contains " << vowel_count << " vowels and " << consonant_count << " consonants" << endl;
}

int main()
{
    char message[] = "Hello! How are you my man, Hope you are well.";
    unsigned int size_arr1 = static_cast<unsigned int>(strlen(message));  // Use strlen to get the length excluding the null terminator

    find_stuf_out(message, size_arr1);
    return 0;
}
