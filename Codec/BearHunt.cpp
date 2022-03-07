#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();

    // Recieve Input
    int N;
    cin >> N;
    vector<vector<int>> board;
    for (int i = 0; i < N; i++) {
        vector<int> temp;
        int num;
        for (int j = 0; j < N; j++) {
            cin >> num;
            temp.push_back(num);
        }
        board.push_back(temp);
    }

    const int OBSTACLE = 0;
    const int PATH = 1;
    int G = 1;
    for (int x = 0; x < N; ++x) {
        for (int y = 0; y < N; ++y) {
            if (board[x][y] != OBSTACLE) {
                int H = abs(x - N-1) + abs(y - N-1);
                int F = G + H;

                board[x][y] = F;
            }
            cout << setfill(' ') << board[x][y] << " " << setw(2);
        }
        G++;
        cout << endl;
    }

    int currentNode[2] = { 0, 0 }; // This needs to update each iteration
    int endNode[2] = { N-1, N-1 };

    int currX = currentNode[0];
    int currY = currentNode[1];

    int destX = endNode[0];
    int destY = endNode[1];

    // check if there are path in each side
    // add those to array and find the min score
    // go to the next tile

    vector<int> openList;
    vector<int> closedList;
    
    cout << endl;
    int i = 0;
    int x = 0, y = 0;
    // do {
    //     // the board on its side is not an obstacle and if the board that is a path not the my current position
    //     if (board[currX][currY-(currY > 0)] != OBSTACLE) { // LEFT
    //         y--;
    //         cout << x << " " << y << endl;
    //     }
    //     if (board[currX][currY+(currY < N)] != OBSTACLE) { // RIGHT
    //         y++;
    //         cout << x << " " << y << endl;
    //     }
    //     if (board[currX-(currX > 0)][currY] != OBSTACLE) { // UP
    //         x--;
    //         cout << x << " " << y << endl;
    //     }
    //     if (board[currX+(currX < N)][currY] != OBSTACLE) { // DOWN
    //         x++;
    //         cout << x << " " << y << endl;
    //     }

    //     if (currentNode[0] == endNode[0] && currentNode[1] == endNode[1]) {
    //         cout << "Found!\n";
    //         break;
    //     }
    //     i++;
    // } while (i < N);

    bool isFound = false;

    // for (int i = 0; i < N; ++i) {
    //     for (int row = 0; row < i+1; ++row) {
    //         if (board[row][i] != OBSTACLE) {
    //             cout << row;
    //         }
    //     }
    //     for (int col = 0; col < i+1; ++col) {
    //         if (board[i][col] != OBSTACLE) {
    //             cout << col << endl;   
    //         }
    //     }
    // }

    return 0;
}
