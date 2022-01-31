#include <iostream>
#include <string>
#include <vector>
#include "funcs.hpp"

using namespace std;

int main()
{

    // Declarations
    int p1;
    int p2;
    bool p1w = false;
    bool p2w = false;
    bool tie = false;
    int win = 0;
    vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};

    greet();

    while (!p1w && !p2w && !tie)
    {

        if (check_tie(board))
        {

            tie = true;
            break;
        }

        cout << "Player 1 enter position: ";
        cin >> p1;

        if ((p1 >= 0 && p1 <= 8) && valid_position(board, p1))
        {

            board[p1] = 'X';
            draw_board(board);
            cout << endl;

            if (check_win(board))
            {

                p1w = true;
                break;
            }

            do
            {

                if (check_tie(board))
                {

                    tie = true;
                    break;
                }

                cout << "Player 2 enter position: ";
                cin >> p2;

                if ((p2 >= 0 && p2 <= 8) && valid_position(board, p2))
                {

                    board[p2] = 'O';
                    draw_board(board);
                    cout << endl;
                    if (check_win(board))
                    {

                        p2w = true;
                        break;
                    }
                    break;
                }
                else
                {

                    cout << "Invalid Position\n";
                }
            } while (!((p2 >= 0 && p2 <= 8) && valid_position(board, p2)));
        }
        else
        {

            cout << "Invalid Position\n";
            continue;
        }
    }

    if (p1w)
        win = 1;
    else if (p2w)
        win = 2;

    winner(win);

    return 0;
}