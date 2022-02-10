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
        {"1", "2", "3"},
        {"4", "5", "6"},
        {"7", "8", "9"}
    };

    return emptyBoard;
}

/**
 * @brief updates marker at location in board
 * 
 * @param location location where to place marker
 * @param marker x or o
 * @param board reference to 2d vector of strings (board)
 */
void PlaceMarker(int location, string marker, vector<vector<string>> & board) {
    int row = (location - 1) / 3;
    int col = (location - 1) % 3;

    board[row][col] = marker;
}

/**
 * @brief print board to stdout
 * 
 * @param board 2d vector of strings to print
 */
void DisplayBoard(vector<vector<string>> board) {
    for (int i = 0; i < board.size(); i++) {
        vector<string> row = board[i];

        // make sure the row has 3 items, otherwise this isn't tic tac toe o.O
        if (row.size() != 3) {
            cout << "Error: board size incorrect" << endl;
            return;
        }

        cout << row[0] << "|" << row[1] << "|" << row[2] << endl;

        if (i != board.size() - 1) {
            // print separater after every row except last row
            cout << "-+-+-" << endl;
        }
    }
}

int main() {
    vector<vector<string>> board = CreateBoard();
    DisplayBoard(board);
}