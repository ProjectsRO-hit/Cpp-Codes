/*Given an array of char types, your job is to hunt for vowels in that array and store the number of vowels in a given variable. For example if you input is

char message[] {'T','h','e',' ','s','k','y',' ' ,'i','s',' ','b','l','u,'e',' ','m','y',' ','f','r','i','e,'n','d'};

your code should find that it contains 6 vowels and store the 6 is a specified vowel_count variable. */

#include <iostream>

using namespace std;

int main() {
    char message[] = {'T', 'h', 'e', ' ', 's', 'k', 'y', ' ', 'i', 's', ' ', 'b', 'l', 'u', 'e', ' ', 'm', 'y', ' ', 'f', 'r', 'i', 'e', 'n', 'd'};
    int run = sizeof(message) / sizeof(message[0]); // Calculate the length of the array
    int vowel_count = 0;

    for (int i = 0; i < run; i++) {
        if (message[i] == 'a' || message[i] == 'A' ||
            message[i] == 'e' || message[i] == 'E' ||
            message[i] == 'i' || message[i] == 'I' ||
            message[i] == 'o' || message[i] == 'O' ||
            message[i] == 'u' || message[i] == 'U') {
            vowel_count++;
        }
    }

    cout << "Vowel Count : " << vowel_count << endl;
    return 0;
}
