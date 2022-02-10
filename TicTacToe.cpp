#include <string>
#include <vector>
#include <iostream>

using namespace std;

/**
 * @brief Create an empty board
 * 
 * @return vector<vector<string>> 2D board 
 */
vector<vector<string>> CreateBoard() {
    vector<vector<string>> emptyBoard {
        {" ", " ", " "},
        {" ", " ", " "},
        {" ", " ", " "}
    };

    return emptyBoard;
}

int main() {
    vector<vector<string>> board = CreateBoard();
}