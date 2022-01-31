#include <iostream>
#include <string>
#include <vector>

using namespace std;

void draw_board(vector<char> board){

    cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << board[6] << " | " << board[7] << " | " << board[8];
}

void greet(){

    cout << "Welcome to Tic-Tac-Toe\nWhen asked to enter your position please type a single number.\n";
    cout << "The grid works as the following:\n";
    cout << "0" << " | " << "1" << " | " << "2" << endl;
    cout << "3" << " | " << "4" << " | " << "5" << endl;
    cout << "6" << " | " << "7" << " | " << "8\n";
    cout << "Player 1 alwas starts as X\nHave Fun!\n\n";
}

bool valid_position(vector<char> board, int position){

    return (board[position] == ' ');
}