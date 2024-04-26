
#include <iomanip>

using namespace std;
int main()
{
    int arr[4][5][3]{
        {{1, 3, 5}, {4, 5, 3}, {2, 4, 6}, {74, 3, 2}, {3, 5, 7}},
        {{1, 1, 5}, {4, 3, 3}, {2, 4, 6}, {7, 3, 2}, {3, 5, 7}},
        {{1, 0, 5}, {4, 5, 3}, {1, 4, 6}, {74, 5, 2}, {3, 5, 7}},
        {{1, 3, 5}, {4, 9, 3}, {2, 4, 6}, {94, 3, 2}, {3, 50, 7}}};

    for (size_t i{0}; i < std::size(arr); i++)
    {
        for (size_t j{0}; j < std::size(arr[i]); j++)
        {
            for (size_t k{0}; k < std::size(arr[i][j]); k++)
            {
                std::cout <<  arr[i][j][k] << "     ";
            }
        }
        std::cout << std::endl;
    }
    return 0;
}
>>>>>>> 821e097fc99fb81df06aca1755ace8930d167767
