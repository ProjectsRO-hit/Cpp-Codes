#include <iostream>
#include <ctime>
#include <cstdlib>

void random_slang(int rand)
{
    switch (rand)
    {
    case 1:
    {
        std::cout << "Hi Gandu!" << std::endl;
    }
    break;
    case 2:
    {
        std::cout << "Hi Bhosdk!" << std::endl;
    }
    break;

    case 3:
    {
        std::cout << "Hi Lawdu!" << std::endl;
    }
    break;

    case 4:
    {
        std::cout << "Aaagye Gand Marane!" << std::endl;
    }
    break;

    case 5:
    {
        std::cout << "Chal B bhosdk Padhai Kar!" << std::endl;
    }
    break;
    case 6:
    {
        std::cout << "Abe chotu Nunu Wale!" << std::endl;
    }
    break;
    case 7:
    {
        std::cout << "Bade Harami Ho bete!" << std::endl;
    }
    break;
    case 8:
    {
        std::cout << "Abe sanki!" << std::endl;
    }
    break;
    case 9:
    {
        std::cout << "Fuck Off!" << std::endl;
    }
    break;
    case 10:
    {
        std::cout << "Hi You are extemely Lucky! No slang!" << std::endl;
    }
    break;

    default:
    {
        std::cout << "Error!" << std::endl;
    }
    break;
    }
}

int main()
{
    std::cout << "        Weclome to Random Slang Generator        " << std::endl;
    std::cout << "        Press 1 to generate new Slang, or Press 2 to quit......       " << std::endl;
    short int input;
    std::cin >> input;
    if (input == 1)
    {
        std::srand(std::time(0));
        int random_num = std::rand() % 10 + 1; // [1~10]
        random_slang(random_num);
    }
    else if (input == 2)
    {
        std::cout << " Thanks! Come Again!" << std::endl;
    }
    else
    {
        std::cerr << " Error! Exit Code 101!" << std::endl;
    }

    return 0;
}