/*A girl is allowed to go out only on ODD days to spend her pocketmoney which is 3000 a month,
Hence we write a program to tell her if she can go out or not and if she goes out her pocket money will be deducted by 300 .*/

#include <iostream>

using namespace std;

int main()
{
    int pocketmoney = 3000;

    for (int date = 1; date <= 30; date++)
    {
        if (date % 2 != 0)
        {
            if (pocketmoney >= 300)
            {
                cout << "On day " << date << ": You can go out today. Pocket money deducted by 300.\n"
                     << endl;
                pocketmoney -= 300;
            }
            else
            {
                cout << "On day " << date << ": You don't have enough pocket money to go out today.\n"
                     << endl;
            }
        }
    }

    return 0;
}
