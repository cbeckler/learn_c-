#include <iostream>
#include "ufo_functions.hpp"
#include <string>

int main() {

    greet();

    std::string codeword = "Mulder";
    std::string answer = "______";

    int misses=0;

    std::vector<char> incorrect = {' '}; 

    bool guess=false;

    char letter;

    while (answer!=codeword&&misses<7) {

        display_misses(misses);

        display_status(incorrect, answer);

        std::cout << "\nPlease enter your guess: \n";

        std::cin >> letter;

        for (int i=0; i<codeword.length(); i++) {
            if (codeword[i]==letter) {
                answer[i]=letter;
                guess=true;
            }
        }

        if (guess==true) {
            std::cout << "\nCorrect!\n";
        }
        else {
            std::cout << "\nIncorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter); 
            misses++;
        }

        guess=false;        

    }

    end_game(answer, codeword);

}