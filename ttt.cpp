#include <iostream>
#include <string>
#include <vector>
#include "funcs.hpp"

using namespace std;

int main(){

    // Declarations
    int p1;
    int p2;
    bool p1w = false;
    bool p2w = false;
    vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    greet();

    while(!p1w || !p2w){

        cout << "Player 1 enter position: ";
        cin >> p1;

        if((p1 >= 0 && p1 <= 8) && valid_position(board, p1)){

            board[p1] = 'X';
            draw_board(board);
            cout << endl;

            do{

                cout << "Player 2 enter position: ";
                cin >> p2;

                if((p2 >= 0 && p2 <= 8) && valid_position(board, p2)){

                    cout << "Invalid Position\n";
                }
                else{

                    board[p1] = 'O';
                    draw_board(board);
                    cout << endl;
                }
            }while ((p2 >= 0 && p2 <= 8) && valid_position(board, p2));
        }
        else{

            cout << "Invalid Position\n";
            continue;
        }
    }


    return 0;
}