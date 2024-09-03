#include <iostream>
#include <random>

int main() {

    std::random_device rd; //obtain random number
    std::mt19937 gen(rd()); // seed
    std:: uniform_int_distribution<> distr(1,20); // range

    int result = distr(gen);

    if (result==1) {
        std::cout << "It is certain.\n";
    }
    else if (result==2) {
        std::cout << "It is decidedly so.\n";
    }
    else if (result==3) {
        std::cout << "Without a doubt.\n";
    }
    else if (result==4) {
        std::cout << "Yes - definitely.\n";
    }
    else if (result==5) {
        std::cout << "You may rely on it.\n";
    }
    else if (result==6) {
        std::cout << "As I see it, yes.\n";
    }
    else if (result==7) {
        std::cout << "Most likely.\n";
    }
    else if (result==8) {
        std::cout << "Outlook good.\n";
    }
    else if (result==9) {
        std::cout << "Yes.\n";
    }
    else if (result==10) {
        std::cout << "Signs point to yes.\n";
    }
    else if (result==11) {
        std::cout << "Reply hazy, try again.\n";
    }
    else if (result==12) {
        std::cout << "Ask again later.\n";
    }
    else if (result==13) {
        std::cout << "Better not tell you now.\n";
    }
    else if (result==14) {
        std::cout << "Cannot predict now.\n";
    }
    else if (result==15) {
        std::cout << "Concentrate and ask again.\n";
    }
    else if (result==16) {
        std::cout << "Don't count on it.\n";
    }
    else if (result==17) {
        std::cout << "My reply is no.\n";
    }
    else if (result==18) {
        std::cout << "My sources say no.\n";
    }
    else if (result==19) {
        std::cout << "Outlook not so good.\n";
    }
    else if (result==20) {
        std::cout << "Very doubtful.\n";
    }

    return 0;

}
