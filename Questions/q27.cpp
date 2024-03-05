// In addition to the ++ operator that adds 1 to its operand,
// there is a decrement operator (--) that subtracts 1. Use the decrement
// operator to write a while that prints the numbers from ten down to zero

#include <iostream>

int main()
{
    int operand{11}, sum{0};  // here we declared operand as 11 because we are decrementing it in  while statement hence while will start from 11 but the inner loop will start from 10
    while (operand--)
    {
        sum += operand;
    }
    std::cout << "The sum from 10 to 0 is : " << sum << std::endl;
    return 0;
}