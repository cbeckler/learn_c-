#include <vector>
#include <iostream>

// define functions

void greet() {
    std::cout << "\n It's time to play tic tac toe! Here's your game board:\n\n";
    std::cout << " 1 | 2 | 3 \n";
    std::cout << "-----------\n";
    std::cout << " 4 | 5 | 6 \n";
    std::cout << "-----------\n";
    std::cout << " 7 | 8 | 9 \n\n";
    std::cout << "Alternate entries with your partner to play!\n\n";
}

char get_mark(int turns) {

    char mark;

    // if even-numbered turn
    if (turns%2==0) {
        mark = 'O';
    }
    else {
        mark = 'X';
    }

    return mark;

}

char get_input(std::vector<char> board) {

    char input;

    std:: cout << "Enter the number of the space you wish to place your mark.\n";
    std::cin >> input;

    // convert input to int and subtract 49 to get index number (0 is 48 in ASCII, then -1 to start at 0 for an input of 1)
    int input_index = input - 49;

    if (board[input_index]=='X'||board[input_index]=='O'){
        std::cout << "Space " << input << " has already been taken. Please enter the number of another space.\n";
        std::cin >> input;
    }

    return input;

}

void board_output(std::vector<char> board) {

    std::cout << "\n " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    std::cout << "-----------\n";
    std::cout << "\n " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    std::cout << "-----------\n";
    std::cout << "\n " << board[6] << " | " << board[7] << " | " << board[8] << " \n\n";

}

int win_condition(std::vector<char> board){

    int game_won;

    // top across
    if (board[0]==board[1]&&board[1]==board[2]){
        if (board[0]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[0]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // middle across
    else if (board[3]==board[4]&&board[4]==board[5]){
        if (board[3]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[3]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // bottom across
    else if (board[6]==board[7]&&board[7]==board[8]){
        if (board[6]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[6]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // left down
    else if (board[0]==board[3]&&board[3]==board[6]){
        if (board[0]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[0]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // middle down
    else if (board[1]==board[4]&&board[4]==board[7]){
        if (board[1]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[1]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // right down
    else if (board[2]==board[5]&&board[5]==board[8]){
        if (board[2]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[2]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // left diagonal
    else if (board[0]==board[4]&&board[4]==board[8]){
        if (board[0]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[0]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // right diagonal
    else if (board[2]==board[4]&&board[4]==board[6]){
        if (board[2]=='X') {
            std::cout << "\n Player 1 wins!\n\n";
        }
        else if (board[2]=='O'){
            std::cout << "\n Player 2 wins!\n\n";
        }
        
        game_won=1;
    }
    // no win condition met
    else{
        game_won=0;
    }

    return game_won;

}