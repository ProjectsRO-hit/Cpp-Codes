/*This exercise is specifically designed to force you to use the std::strncpy function . Please read the documentation carefully.

Given 4 predefined character arrays with the data exactly as shown below

    const char src1[] {"will old space the replace"};
    const char src2[] {"sense sky  hit has"};
    const char src3[] {"hello went is get"};
    const char src4[] {"red blue yellow orange"};
your job is to use the std::strncpy algorithm and copy the data that make up the string "The sky is blue".
 For example you will copy the substring 'the' from src1 and store that in a result dynamic array that you will have access to.
 After that you will copy the substring 'sky' from src2 and paste that after result, with words separated exactly with a single space.
 You will keep doing the same until you have the string "The sky is blue" stored in the result dynamic array.

You will be using pointer arithmetic offsets to tell std::strncpy where it's going to start
 copying from and you will figure out how many characters it will paste into the result destination array depending on the message
  we want finally stored in result.

Once you have the message stored in result, you will print it using std::cout exactly in the format below

result : the sky is blue

Please note that there is no new line character after the message. If you put one, our testing code will flag that as a problem.*/

#include <iostream>
#include <cstring>
using namespace std;

void extract_message(const char *src1, const char *src2,
                     const char *src3, const char *src4)
{

    char *result;
    result = new char[20]; // Dynamically allocate for space
    std::strncpy(result,src1 + 15,3); 

    std::strncpy(result + 3,src2 + 5, 4 );

    std::strncpy(result + 7, src3 + 10, 3);

    std::strncpy(result + 10,src4 + 3, 5 );

    result[15] = '\0';
    std::cout << result << endl;

    delete[] result;
}
int main()
{
    const char src1[]{"will old space the replace"};
    const char src2[]{"sense sky  hit has"};
    const char src3[]{"hello went is get"};
    const char src4[]{"red blue yellow orange"};

    extract_message(src1, src2, src3, src4);
    return 0;
}