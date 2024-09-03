// program to play rock paper scissors lizard spock

#include <iostream>
#include <random>
#include <string>

int main() {

    std::random_device rd; //obtain random number
    std::mt19937 gen(rd()); // seed
    std:: uniform_int_distribution<> distr(1,5); // range

    int computer = distr(gen);
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

    std::cout << "1) rock\n";
    std::cout << "2) paper\n";
    std::cout << "3) scissors\n";
    std::cout << "4) lizard\n";
    std::cout << "5) spock\n\n";

    std::cout << "shoot! Enter the number of your choice:\n";

    std::cin >> user;

    while (user<1||user>5||std::cin.fail()) // if number is out of range or a string was entered
     {
        std::cout << "Not a valid answer. Please input 1, 2, 3, or 4.\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> user;
    };

    std::string computer2; 

    if (computer==1){
        std::cout << "\nComputer chose rock.\n\n";
    }
    else if (computer==2){
        std::cout << "\nComputer chose paper.\n\n";
    }
    else if (computer==3){
        std::cout << "\nComputer chose scissors.\n\n";
    }
    else if (computer==4){
        std::cout << "\nComputer chose lizard.\n\n";
    }
    else if (computer==5){
        std::cout << "\nComputer chose spock.\n\n";
    }

    if (computer==1&&(user==2||user==5)) {
        std::cout << "You win!\n";
    }
    else if (computer==2&&(user==3||user==4)) {
        std::cout << "You win!\n";
    }
    else if (computer==3&&(user==1||user==5)) {
        std::cout << "You win!\n";
    }
    else if (computer==4&&(user==1||user==3)) {
        std::cout << "You win!\n";
    }
    else if (computer==5&&(user==2||user==4)) {
        std::cout << "You win!\n";
    }
    else if (computer==user){
        std::cout << "It's a draw!\n";
    }
    else {
        std::cout << "You lose!\n";
    }

    return 0;
}