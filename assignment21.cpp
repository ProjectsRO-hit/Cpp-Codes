/*You'll write a calculator app that prompts for the user for the result of an operation.
It'll tell the user if they got it right or if the messed up big time!

Your program will randomly generate integers between 0 and 199 and carry out  random operations (addition, subtraction, multiplication)
on on these two random integers. The program will then ask the user for the result of the operation on the random numbers.

The user will type their answer on the terminal and your program will tell them whether they got it right or not.
This program will reuse the technique we saw in fortune teller to give the user a chance to run the program again without having to re-run it,
until the user decides for the program to end. Below is a sample run of the program.*/

#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

void random_question(size_t r1, size_t r2)
{
    int user_answer;
    char operation_gen;
    char operations[]{'+', '-', '*', '/'};
    operation_gen = operations[std::rand() % 4];

    int result;
    switch (operation_gen)
    {
    case '+':
        result = r1 + r2;
        break;
    case '-':
        result = r1 - r2;
        break;
    case '*':
        result = r1 * r2;
        break;
    case '/':
        // Avoid division by zero
        if (r2 != 0)
            result = r1 / r2;
        else
        {
            // If division by zero occurs, re-generate random numbers and operation
            std::cout << "Error: Division by zero occurred. Regenerating numbers." << std::endl;
            random_question(std::rand() % 200, std::rand() % 200);
            return;
        }
        break;
    default:
        std::cout << "Invalid operation." << std::endl;
        return;
    }

    // Prompting user for answer
    std::cout << "What will be the answer of this operation: " << r1 << operation_gen << r2 << std::endl;
    std::cin >> user_answer;

    // Checking user's answer
    if (user_answer == result)
        std::cout << "Correct! Good job!" << std::endl;
    else
        std::cout << "Incorrect. The correct answer is: " << result << std::endl;
}

int main()
{
    bool end{false};
    std::srand(std::time(0));
    std::cout << "Welcome to the Greatest Calculator on Earth! Here I ask question not you mf!" << std::endl;

    while (!end)
    {
        size_t randomnum1 = std::rand() % 200;
        size_t randomnum2 = std::rand() % 200;
        random_question(randomnum1, randomnum2);
        
        char user_end;
        std::cout << " Do you want to continue? Press 'Y' to continue or 'N' to exit!" << std::endl;
        std::cin >> user_end;
        if (user_end == 'N' || user_end == 'n')
        {
            end = true;
        }
    }

    return 0;
}
