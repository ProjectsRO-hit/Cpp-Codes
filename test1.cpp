#include <iostream>

int main()
{
 char *name {"Rohit"};
 std::cout << "The name is :" << name << std::endl;
 std::cout << "The name is :" << *name << std::endl;
   return 0;
}