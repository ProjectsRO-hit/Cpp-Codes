#include <iostream>
using namespace std;

int main()
{
  // Write your code here
  int x = 4, y = 0;
  char c[]{'+', '-', '/', '*'};

  while (x != 0)
  {
    int result;
    switch (c[y])
    {
    case '+':
      result = 8 + 4;
      break;
    case '-':
      result = 8 - 4;
      break;
    case '/':
      result = 8 / 4;
      break;
    case '*':
      result = 8 * 4;
      break;

    default:
      std::cout << "error" << std::endl;
      break;
    }
    std::cout << result << std::endl;
    y++;
    x--;
  }
  return 0;
}
