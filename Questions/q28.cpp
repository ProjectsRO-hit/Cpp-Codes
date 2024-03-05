// Write a program that prompts the user for two integers.
// Print each number in the range specified by those two integers

/*
#include<iostream>

int main()
{
    int input1{}, input2{};
    std::cout << "Input two numbers sequently to obtain the range!" << std::endl;
    std::cin >> input1 >> input2;

    if(input1 == input2)
    {
         std::cerr<< "Error! You have provided same input! Please try again!"<< std::endl;
    }
    else{

    if(input1 > input2)
    {
        while(input2 <= input1)
        {
            std::cout << input2 << ",";
            input2++;
        }
    }
    else if (!(input1 > input2))
    {
       while(input2 >= input1)
        {
            std::cout << input1 << ",";
            input1++;
        }  
    }
    }

return 0;
}
*/

#include<iostream>

int main()
{
    int input1{}, input2{};
    std::cout << "Input two numbers sequentially to obtain the range!" << std::endl;
    std::cin >> input1 >> input2;

    if(input1 == input2)
    {
         std::cerr << "Error! You have provided the same input! Please try again!" << std::endl;
    }
    else
    {
        if(input1 > input2)
        {
            while(input2 <= input1)
            {
                std::cout << input2;
                if (input2 < input1) {
                    std::cout << ",";
                }
                input2++;
            }
        }
        else if (input1 <= input2)
        {
            while(input1 <= input2)
            {
                std::cout << input1;
                if (input1 < input2) {
                    std::cout << ",";
                }
                input1++;
            }  
        }
        std::cout << std::endl;
    }

    return 0;
}
