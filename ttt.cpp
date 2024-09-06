#include <iostream>
#include <vector>
#include "ttt.hpp"
#include <algorithm>

int main() {

    std::vector<char> board = {'1','2','3','4','5','6','7','8','9'};

    greet();

    for (int turns=1; turns<10; turns++) {

        char mark;

        mark = get_mark(turns);

        char input;

        input = get_input(board);

        // iterating through board (& modifier means actual vector will be permanently changed)
        for (auto& i : board) {
            // if the user input matches a board space's number
            if (input==i) {
                // replace number with player mark
                i=mark;
            }
        }

        board_output(board);

        int game_won;

        game_won = win_condition(board);
        
        if (game_won==1){
            break;
        }
        else if (game_won==0&&turns==9){
            std::cout << "\nIt's a tie!\n";
        }

    }

}