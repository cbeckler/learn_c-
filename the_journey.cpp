#include <iostream>

int main(){

    int choice1;
    int choice2;
    int choice3;
    int choice4;

    std::cout << "\nYou're walking on a lonely road. You come upon a fork in the path.\n";
    std::cout << "One one side, the path goes into a forest, overgrown and wild. \n";
    std::cout << "On the other side, the path leads to a cave, dark and deep. \n\n";
    std::cout << "Which way will you go? Enter 1 for the forest or 2 for the cave.\n\n";

    std::cin >> choice1;

    while (choice1<1||choice1>2||std::cin.fail()) // if number is out of range or a string was entered
     {
        std::cout << "Not a valid answer. Please input 1 or 2.\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> choice1;
    };

    do 
   {

    if (choice1==2){
        break;
    }

        std::cout << "\nThe forest feels forboding around you, and you hear a growl to your left.\n";
        std::cout << "You could confront the growl, climb a tree, or run away.\n";
        std::cout << "What do you choose? 1 for confront, 2 for climb a tree, or 3 for run away.\n\n";
        std::cin >> choice2;

        int choice2n = 1;

        while (choice2<1||choice2>3||std::cin.fail()) // if number is out of range or a string was entered
        {
            std::cout << "Not a valid answer. Please input 1, 2, or 3.\n";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> choice2;
        };

            while (choice2==1&&choice2n<2){
                std::cout << "Are you sure you want to confront the growl? Enter 1 for confront, 2 for climb a tree, or 3 for run away.\n\n";
                std::cin >> choice2;
                choice2n++;
            };

            if (choice2==1){
                std::cout << "\nThe great beast leaps and tears your throat out! You die.\n\n";
                std::cout << "Game over.\n";
                choice1=0;
            }

            else if (choice2==2){
                std::cout << "\nYou climb a tree and wait until a great beast stalks past and disappears.\n";
                std::cout << "What do you do next? Enter 1 for continue into the forest or 2 to go back to the cave.\n\n";
                std::cin >> choice3;
                choice1=0;
            

                while (choice3<1||choice3>2||std::cin.fail()) // if number is out of range or a string was entered
                {
                    std::cout << "Not a valid answer. Please input 1 or 2.\n";
                    std::cin.clear();
                    std::cin.ignore(256, '\n');
                    std::cin >> choice3;
                };

                if (choice3==1){
                    std::cout << "\nIn the forest you see two possibilities to investigate. One is a cabin and one is something glinting on top of a cliff.\n";
                    std::cout << "Which do you go to? Enter 1 for the cabin or 2 for the cliff.\n\n";
                    std::cin >> choice4;
                

                    while (choice4<1||choice4>2||std::cin.fail()) // if number is out of range or a string was entered
                    {
                        std::cout << "Not a valid answer. Please input 1 or 2.\n";
                        std::cin.clear();
                        std::cin.ignore(256, '\n');
                        std::cin >> choice4;
                    };

                    if (choice4==1){
                    std::cout << "\nYou enter the cabin and are greeted by an elf and an orc, who appear to be married.\n";
                    std::cout << "They greet you warmly and invite you to stay for dinner. Over the course of the night, you find you become fast friends.\n";
                    std::cout << "When you leave, it's with the invitation to come back any time you wish, and you think it was an adventure worth having.\n\n";
                    std::cout << "THE END\n";
                    }
                    
                    else if (choice4==2){
                        std::cout << "\nYou climb to the top of the cliff and find a bejewled sword. It's the king's long lost sword!\n";
                        std::cout << "You take the sword back to the city with you and present it to the king.\n";
                        std::cout << "The king is grateful and dubs you a night and gives you 1000 gold. You think it was an adventure worth having.\n\n";
                        std::cout << "THE END\n";
                    }
                }

                else if (choice3==2){
                    choice1 = 2;
                }
            }
            else if (choice2==3){
                std::cout << "\nYou race through the forest until you can't hear the beast chasing you.\n";
                std::cout << "When you stop, you see two possibilities to investigate. One is a mysterious lake and the other is an ominous-looking rock shaped like an obelisk.\n";
                std::cout << "Which do you choose? Enter 1 for the lake or 2 for the obelisk.\n\n";
                std::cin >> choice3;
                choice1=0;

                    int choice3n=1;

                    while (choice3<1||choice3>2||std::cin.fail()) // if number is out of range or a string was entered
                    {
                        std::cout << "Not a valid answer. Please input 1 or 2.\n";
                        std::cin.clear();
                        std::cin.ignore(256, '\n');
                        std::cin >> choice3;
                    };

                    while (choice3==2&&choice3n<2){
                        std::cout << "Are you sure you want to investigate the obelisk? Enter 1 for the cliff or 2 for the obelisk.\n\n";
                        std::cin >> choice3;
                        choice3n++;
                    };

                    if (choice3==2){
                        std::cout << "\nA bolt of lightning leaps out from the obelisk and strikes you. You die.\n\n";
                        std::cout << "Game over.\n";
                    }

                    else if (choice3==1){
                        std::cout << "\nYou approach the lake and see an altar. Do you go for a swim or leave an offering on the altar?\n";
                        std::cout << "Press 1 for swimming or 2 for leaving an offering.\n\n";
                        std::cin >> choice4;

                        while (choice4<1||choice4>2||std::cin.fail()) // if number is out of range or a string was entered
                        {
                            std::cout << "Not a valid answer. Please input 1 or 2.\n";
                            std::cin.clear();
                            std::cin.ignore(256, '\n');
                            std::cin >> choice4;
                        };

                        int choice4n=1;

                        while (choice4==1&&choice4n<2){
                        std::cout << "Are you sure you want to go for a swim? Enter 1 for swimming or 2 to leave an offering.\n\n";
                        std::cin >> choice4;
                        choice4n++;
                        };

                        if (choice4==1){
                            std::cout << "\nA Kraken rises from the depths and pulls you into the deep. You die.\n\n";
                            std::cout << "Game over.\n";
                        }

                        else if (choice4==2){
                            std::cout << "\nYou don't have much, but you leave an offering of a few bronze pieces on the altar.\n";
                            std::cout << "A mermaid rises from the depths and takes the offering. She smiles at you, and in return leaves a necklace of gleaming pearls.\n";
                            std::cout << "You put the precious pearls carefully into your bag. You think it was an adventure worth having.\n\n";
                            std::cout << "THE END\n";
                        };

                    };
            };
    }
    while (choice1==1);
    
    if (choice1==2){
        std::cout << "\nYou light a torch and the shadows flicker around you.\n";
        std::cout << "There are two ways to go. One path stinks of decay, from the other the sound of running water.\n";
        std::cout << "Which way do you go? 1 for towards decay or 2 for towards water.\n\n";
        std::cin >> choice2;

        while (choice2<1||choice2>2||std::cin.fail()) // if number is out of range or a string was entered
        {
            std::cout << "Not a valid answer. Please input 1 or 2.\n";
            std::cin.clear();
            std::cin.ignore(256, '\n');
            std::cin >> choice2;
        };
    };
}