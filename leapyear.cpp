#include <iostream>

int main() {

    int year;

    std::cout << "Enter 4 digit year:\n";
    std::cin >> year;

     while (year <= 999 || year >= 10000)
        {std::cout << "Year is invalid. Please enter 4 digit year:\n";
        std::cin >> year;}
    ;

    if (year%400==0)
        {
            std::cout << year << " is a leap year.\n";
        }
    else if (year%100==0 && year%400!=0)
        {
            std::cout << year << " is not a leap year.\n";
        }
    else if (year%4==0)
        {
            std::cout << year << " is a leap year.\n";;
        }
    else 
        {std::cout << year << " is not a leap year.\n";;}
        
return 0;
}