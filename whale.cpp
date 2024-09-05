#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

int main() {

// translate whale talk to human talk (only vowels, double the e's and u's, no spaces)

    std::string human;

    std::cout << "\nEnter the phrase you wish to translate to whale talk. No punctuation.\n";

    // alternative method of calling cin that will allow for spaces
    std::getline(std::cin, human);

    std::vector<char> vowels = {'a','e','i','o','u'}; 

    std::vector<char> whale;

    // iterate through input
    for (int i=0; i<human.size();i++){
        // iterate through vowel list
        for (int j=0; j<vowels.size(); j++) {
            // if input char is in vowel list
            if (human[i]==vowels[j]){
                whale.push_back(human[i]);
            }
        }
        if (human[i]=='e'||human[i]=='u'){
            whale.push_back(human[i]);
        }
    }

    std::cout << "\nYour phrase in whale talk is ";
    for (int k=0; k<whale.size();k++){
        std::cout << whale[k];
    }

}