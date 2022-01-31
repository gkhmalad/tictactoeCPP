#include <iostream>
#include <string>
#include <vector>

using namespace std;

void draw_board(vector<char> board)
{

    cout << board[0] << " | " << board[1] << " | " << board[2] << endl;
    cout << board[3] << " | " << board[4] << " | " << board[5] << endl;
    cout << board[6] << " | " << board[7] << " | " << board[8];
}

void greet()
{

    cout << "Welcome to Tic-Tac-Toe\nWhen asked to enter your position please type a single number.\n";
    cout << "The grid works as the following:\n";
    cout << "0"
         << " | "
         << "1"
         << " | "
         << "2" << endl;
    cout << "3"
         << " | "
         << "4"
         << " | "
         << "5" << endl;
    cout << "6"
         << " | "
         << "7"
         << " | "
         << "8\n";
    cout << "Player 1 alwas starts as X\nHave Fun!\n\n";
}

bool valid_position(vector<char> board, int position)
{

    return (board[position] == ' ');
}

bool check_win(vector<char> board)
{

    if ((board[0] == board[1] && board[1] == board[2]) && board[0] != ' ')
        return true;
    else if ((board[3] == board[4] && board[4] == board[5]) && board[3] != ' ')
        return true;
    else if ((board[6] == board[7] && board[7] == board[8]) && board[6] != ' ')
        return true;
    else if ((board[0] == board[3] && board[3] == board[6]) && board[0] != ' ')
        return true;
    else if ((board[1] == board[4] && board[4] == board[7]) && board[1] != ' ')
        return true;
    else if ((board[2] == board[5] && board[5] == board[8]) && board[2] != ' ')
        return true;
    else if ((board[0] == board[4] && board[4] == board[8]) && board[0] != ' ')
        return true;
    else if ((board[6] == board[4] && board[4] == board[2]) && board[6] != ' ')
        return true;

    return false;
}

void winner(int winner)
{

    if (winner == 1)
    {
        cout << "Congratulations Player 1! YOU WON";
    }
    else if (winner == 2)
    {
        cout << "Congratulations Player 2! YOU WON";
    }
    else
    {
        cout << "It's a TIE!";
    }
}

bool check_tie(vector<char> board)
{

    if (!check_win(board))
    {

        int emptycounter = 0;

        for (int i = 0; i < board.size(); i++)
        {

            if (board[i] == ' ')
                emptycounter++;
        }

        if (emptycounter == 0)
            return true;
    }

    return false;
}