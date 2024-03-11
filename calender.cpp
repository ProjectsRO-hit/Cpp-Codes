#include <iostream>
#include <iomanip>

int main()
{
    unsigned int year;
    std::cout << "-------Welcome to Terminal Calender--------" << std::endl;
    std::cout << "Input the year of the required calender: ";
    std::cin >> year;

    unsigned int first_day;
    std::cout << "Input which day was Jan 1st of the required calender (ex: 1 for Mon, 2 for Tue....7 for Sun): ";
    std::cin >> first_day;

    std::cout << std::endl;
    std::cout << "Calendar for " << year << std::endl;
    int no_of_days_in_a_month = 0;
    unsigned int start_point{first_day};
    unsigned int day_counter{0};
    unsigned int day_width{6};

    for (int month = 1; month <= 12; month++)
    {
        switch (month)
        {
        case 1:
            no_of_days_in_a_month = 31;
            std::cout << "--January " << year << " --" << std::endl;
            break;

        case 2:
            if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
            {
                no_of_days_in_a_month = 29;
                std::cout << "--February " << year << " --" << std::endl;
            }
            else
            {
                no_of_days_in_a_month = 28;
                std::cout << "--February " << year << " --" << std::endl;
            }
            break;

        case 3:
            no_of_days_in_a_month = 31;
            std::cout << "--March " << year << " --" << std::endl;
            break;

        case 4:
            no_of_days_in_a_month = 30;
            std::cout << "--April " << year << " --" << std::endl;
            break;

        case 5:
            no_of_days_in_a_month = 31;
            std::cout << "--May " << year << " --" << std::endl;
            break;

        case 6:
            no_of_days_in_a_month = 30;
            std::cout << "--June " << year << " --" << std::endl;
            break;

        case 7:
            no_of_days_in_a_month = 31;
            std::cout << "--July " << year << " --" << std::endl;
            break;

        case 8:
            no_of_days_in_a_month = 31;
            std::cout << "--August " << year << " --" << std::endl;
            break;

        case 9:
            no_of_days_in_a_month = 30;
            std::cout << "--September " << year << " --" << std::endl;
            break;

        case 10:
            no_of_days_in_a_month = 31;
            std::cout << "--October " << year << " --" << std::endl;
            break;

        case 11:
            no_of_days_in_a_month = 30;
            std::cout << "--November " << year << " --" << std::endl;
            break;

        case 12:
            no_of_days_in_a_month = 31;
            std::cout << "--December " << year << " --" << std::endl;
            break;
        }

        std::cout << std::setw(day_width) << "Mon"
                  << std::setw(day_width) << "Tue"
                  << std::setw(day_width) << "Wed"
                  << std::setw(day_width) << "Thu"
                  << std::setw(day_width) << "Fri"
                  << std::setw(day_width) << "Sat"
                  << std::setw(day_width) << "Sun" << std::endl;

        for (int j{1}; j < start_point; j++)
        {
            std::cout << std::setw(day_width) << "";
            ++day_counter;
            if (day_counter == 7)
            {
                std::cout << std::endl; // Move to the next week
                day_counter = 0;
            }
        }

        for (int i{1}; i <= no_of_days_in_a_month; i++)
        {
            std::cout << std::setw(day_width) << i;
            ++day_counter;
            if (day_counter == 7)
            {
                std::cout << std::endl; // Move to the next week
                day_counter = 0;
            }
        }

        start_point = day_counter + 1;
        day_counter = 0;
        std::cout << "\n\n";
    }
}

// tell the year?
//check 