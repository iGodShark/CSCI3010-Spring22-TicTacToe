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

void DisplayBoard(vector<vector<string>> board){
    
    int lineCount = 0;
    
    //traverse 2D vect
    for(int x = 0; x < 3; x++){

        for(int y = 0; y < 3; y++){
            //print x/o/" "
            cout<<board[x][y];
        
        }
        
        //reset linecount
        lineCount = 0;
        cout<<endl;
    }
    
    
}

int main() {
    vector<vector<string>> board = CreateBoard();
    DisplayBoard(board);
}
