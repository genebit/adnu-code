#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<int>> squarePatch(int n) {
    vector<vector<int>> square;

    for (int i = 0; i < n; ++i) {
        vector<int> temp;
        for (int j = 0; j < n; ++j) {
            temp.push_back(n);
        }
        square.push_back(temp);
    }
    return square;
}

int main() {
    int n;
    cin >> n;

    // Output
    for (vector<int> i : squarePatch(n)) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}