#include <iostream>
#include <string>
#include <vector>

using namespace std;

void greet();
void draw_board(vector<char> board);
bool valid_position(vector<char> board, int position);
bool check_win(vector<char> board);
bool check_tie(vector<char> board);
void winner(int winner);