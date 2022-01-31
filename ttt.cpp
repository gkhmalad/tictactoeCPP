#include <iostream>
#include <string>
#include <vector>
#include "funcs.hpp"

using namespace std;

int main(){

    vector<char> board = {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '};
    greet();
    draw_board(board);


    return 0;
}