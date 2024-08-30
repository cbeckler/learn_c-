#include <iostream>

int main() {

    double pesos = 0, reais = 0, soles = 0, dollars = 0;

    std::cout << "Enter number of Colombian Pesos:\n";
    std::cin >> pesos;

    std::cout << "Enter number of Brazilian Reais:\n";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles:\n";
    std::cin >> soles;

    dollars = (0.00024*pesos) + (0.18*reais) + (0.27*soles);

    std::cout << "US Dollars = $" << dollars << "\n";

    return 0;

}