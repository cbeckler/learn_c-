#include <iostream>
#include <string>

int main() {

    int jedi=0;
    int sith=0;
    int clone=0;
    int senator=0;

    int answer1=0;
    int answer2=0;
    int answer3=0;
    int answer4=0;

    std::cout << "The Star Wars Quiz!\n";

    std::cout << "Q1) I most value:\n";
    std::cout << "1) Peace\n";
    std::cout << "2) Power\n";
    std::cout << "3) Duty\n";
    std::cout << "4) Justice\n";

    std::cout << "Enter the number of your answer:\n";
    std::cin >> answer1;

    while (answer1<1||answer1>4||std::cin.fail()) // if number is out of range or a string was entered
     {
        std::cout << "Not a valid answer. Please input 1, 2, 3, or 4.\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> answer1;
    };

    if (answer1==1){
        jedi++;
    }
    else if (answer1==2){

        sith++;
    }
    else if (answer1==3){
        clone++;
    }
    else if (answer1==4){
        senator++;
    }

    std::cout << "Q2) What weapon do you prefer?\n";
    std::cout << "1) Lightsaber\n";
    std::cout << "2) Blaster\n";

    std::cout << "Enter the number of your answer:\n";
    std::cin >> answer2;

    while (answer2<1||answer2>2||std::cin.fail()) // if number is out of range or a string was entered
     {
        std::cout << "Not a valid answer. Please input 1, 2, 3, or 4.\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> answer2;
    };

    if (answer2==1){
        jedi++;
        sith++;
        }
    else if (answer2==2) {
        clone++;
        senator++;
        }
    
    std::cout << "Q3) I like to wear:\n";
    std::cout << "1) Dark colors\n";
    std::cout << "2) Armor\n";
    std::cout << "3) Fancy clothes\n";
    std::cout << "4) Simple clothes\n";

    std::cout << "Enter the number of your answer:\n";
    std::cin >> answer3;

    while (answer3<1||answer3>4||std::cin.fail()) // if number is out of range or a string was entered
     {
        std::cout << "Not a valid answer. Please input 1, 2, 3, or 4.\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> answer3;
    };

    if (answer3==1){
        sith++;
    }
    else if (answer3==2){

        clone++;
    }
    else if (answer3==3){
        senator++;
    }
    else if (answer3==4){
        jedi++;
    }

    std::cout << "Q4) I'd like to visit':\n";
    std::cout << "1) Coruscant\n";
    std::cout << "2) Jedha\n";
    std::cout << "3) Korriban\n";
    std::cout << "4) Kamino\n";

    std::cout << "Enter the number of your answer:\n";
    std::cin >> answer4;

    while (answer4<1||answer4>4||std::cin.fail()) // if number is out of range or a string was entered
     {
        std::cout << "Not a valid answer. Please input 1, 2, 3, or 4.\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> answer4;
    };

    if (answer4==1){
        senator++;
    }
    else if (answer4==2){

        jedi++;
    }
    else if (answer4==3){
        sith++;
    }
    else if (answer4==4){
        clone++;
    }

    int max=0;
    std::string role;

    std::cout << "\nCongratulations you are a ";

    if (jedi > max)
    {
        max = jedi;
        role = "Jedi";
    }
    if (sith > max)
    {
        max = sith; 
        role = "Sith";
    }
    if (clone > max)
    {
        max = clone;
        role = "Clone";
    }
    if (senator > max)
    {
        max = senator;
        role = "Senator";
    }

    std::cout << role <<"!\n";

    return 0;

}