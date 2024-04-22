#include <iostream>
#include <cstring>

int main() {
    const char sentence[] = "Today is My day, Today i will Go To my Todo LisT and do Trignometry";
    const char* answer = sentence;
    char letter = 'T';
    while (answer != '\0') {
        if (answer == letter)
            std::cout << "Target found at index: " << (answer - sentence) << std::endl;
        ++answer;
    }

    return 0;
}