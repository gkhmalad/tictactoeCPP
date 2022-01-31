#include <iostream>
#include <string>
#include <vector>

using namespace std;

void draw_board(vector<char> board);
void greet();
bool valid_position(vector<char> board, int position);
bool check_win(vector<char> board);
void winner(int winner);
bool check_tie(vector<char> board);