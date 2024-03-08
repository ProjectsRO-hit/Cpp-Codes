// /*I am stingy! I want to pay as less as possible

// We have a collection of items

// [ [Item0] [Item1] [Item2] [Item3] [item4] ]

// The prices for each item are then stored in another separate collection

// unit_prices :  {10.4,21.5,14.0,15.2,7.9}

// What this means is  the price for Item0 is 10.5, the price for Item1 is 21.5 and so on.

// We also have another collection, that stores how many of each item we want to buy :

// number_of_items{60,20,10,30,20}

// What this means is , we may choose to buy  60 instances of Item0, or 20 instances of Item1, and so on...

// Knowing that I am stingy and I really want to pay as less as possible, you job is to write a while loop that computes the least amount of money I may pay.
// */

// #include <iostream>
// #include <vector>

// using namespace std;

// int main()
// {
//     int count = 0;
//     vector<double> unit_prices{10.4, 21.5, 14.0, 15.2, 7.9};
//     vector<double> number_of_items{60, 20, 10, 30, 20};
//     vector<double> least_cost(5, 0); // Initialize least_cost with 5 elements, all set to 0

//     while (count < 5)
//     {
//         cout << "Price of Item" << count << " : " << unit_prices[count] << endl;
//         cout << "Number of Item" << count << " : " << number_of_items[count] << endl;

//         least_cost[count] += unit_prices[count] * number_of_items[count];

//         cout << "Total cost of Item" << count << " : " << least_cost[count] << endl;

//         count++;
//     }
//     for (int x = 0; x < 1; x++)
//     {
//         double a, b, c, d, e;
//         a += least_cost[x];
//         b += least_cost[x + 1];
//         c += least_cost[x + 2];
//         d += least_cost[x + 3];
//         e += least_cost[x + 4];

//         if (a < b && a < c && a < d && a < e)
//         {
//             cout << "The least I can pay is : " << a << endl;
//         }
//         else if (b < a && b < c && b < d && b < e)
//         {
//             cout << "The least I can pay is : " << b << endl;
//         }
//         else if (c < b && c < a && c < d && c < e)
//         {
//             cout << "The least I can pay is : " << c << endl;
//         }
//         else if (d < b && d < c && d < a && d < e)
//         {
//             cout << "The least I can pay is : " << d << endl;
//         }
//         else if (e < b && e < c && e < a && e < d)
//         {
//             cout << "The least I can pay is : " << e << endl;
//         }
//     }

//         return 0;
//     }

#include <iostream>
#include <vector>

int main()
{
    std::vector<double> unit_prices{10.4, 21.5, 14.0, 15.2, 7.9};
    std::vector<int> number_of_items{60, 20, 10, 30, 20, 50};

    double least_cost{999999};

    unsigned int count{0};
    while (count < 5)
    {
        if ((unit_prices[count] * number_of_items[count]) < least_cost)
        {
            least_cost = unit_prices[count] * number_of_items[count];
        }
        ++count;
    }
    std::cout << "The least I can pay is  : " << least_cost;

    return 0;
}