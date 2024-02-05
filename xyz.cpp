#include <iostream>
#include <string>


std::string getWeekday(int number) 
{
    std::string result {};
    switch (number)
    {
        case 1: 
            result = "Monday";
            break;
        case 2: 
            result = "Tuesday";
            break;
        case 3: 
            result = "Wednsday";
            break;
        case 4: 
            result = "Thursday";
            break;
        case 5: 
            result = "Friday";
            break;
        case 6: 
            result = "Saturday";
            break;
        case 7: 
            result = "Sunday";
            break;
        default: 
            result = "Invalid";
            break;
            
    }
    return result;
}//end getWeekday()


int main(int argc, char** argv)
{
    std::cout << "What day is today?" << std::endl 
              << "1. " << getWeekday(1) << std::endl
              << "2. " << getWeekday(2) << std::endl
              << "3. " << getWeekday(3) << std::endl
              << "4. " << getWeekday(4) << std::endl
              << "5. " << getWeekday(5) << std::endl
              << "6. " << getWeekday(6) << std::endl
              << "7. " << getWeekday(7) << std::endl;

    int userNum {};
    std::cin >> userNum;

    std::cout << "Thanks, today is " << getWeekday(userNum) << std::endl;
    
    return 0;
}