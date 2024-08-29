// program to convert temperature from farenheit to celsius

#include <iostream>

int main(){

    double tempf;
    double tempc;

    std::cout << "Enter the current temperature in Farenheit:\n";

    std::cin >> tempf;

    tempc = (tempf-32)/1.8;

    std::cout << "The temp is " << tempc << " degrees Celsius.\n";

    return 0;
}