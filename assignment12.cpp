// We have a loop that goes from 0 up to 254 in the exercise.cpp file. Your job is to tweak that loop in such a way that it prints all uppercase characters exactly as shown below

// A B C D E F G H I J K L M N O P Q R S T U V W X Y Z

// The characters are separated by a single space, and there is no space after Z. Please that all characters are on a single line.

// You will print using std::cout , and our testing code will grab all the output from your loop and check if you got this right.

#include <iostream>

using namespace std;

int main()
{
    for (unsigned char i{0}; i < 255; ++i)
    {
        if (i > 64 && i < 0X5B)
        {
            cout << static_cast<unsigned char>(i);
            if (i != 'Z')
            { cout << " ";}
        }
    }
    return 0;
}