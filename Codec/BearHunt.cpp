#include <iostream>
#include <vector>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

// to find the path from top left to bottom right
bool isPath(vector<vector<int>> board) {
    board[0][0] = 1;
    const int OBSTACLE = 0;

    // Mark reachable (from top left) nodes in first row and first column.
    for (int i = 1; i < board.size(); i++) {
        if (board[i][0] != OBSTACLE) {
            board[i][0] = board[i - 1][0];
        }
    }

    for (int j = 1; j < board.size(); j++) {
        if (board[0][j] != OBSTACLE) {
            board[0][j] = board[0][j - 1];
        }
    }

    // Mark reachable nodes in remaining matrix.
    for (int i = 1; i < board.size(); i++) {
        for (int j = 1; j < board.size(); j++) {
            if (board[i][j] != OBSTACLE) {
                board[i][j] = max(board[i][j - 1], board[i - 1][j]);
            }
        }
    }
    
    // return yes if right bottom index is 1
    int destination = board[board.size()-1][board.size()-1];
    return (destination == 1);
}

int main() {
    init();
    vector<vector<int>> board = {
        { 1, 0, 0, 0 },
        { 1, 1, 0, 1 },
        { 0, 1, 0, 0 },
        { 1, 0, 1, 1 }
    };

    // path from board[0][0] to board[row][col]
    (isPath(board)) ? cout << "Yes" : cout << "no solution path";

    return 0;
}
