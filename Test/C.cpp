#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();

    int grid[5][5];

    for (int i = 5; i >= 0; --i) {
        for (int j = i; j < 5; ++j) {
            grid[i][j] = i;
            cout << i << " ";
        }
        cout << endl;
    }

    // cout << grid[3][2];
    return 0;
}
