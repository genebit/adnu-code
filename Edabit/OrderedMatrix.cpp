#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
Create an ordered 2D array (matrix). 
A matrix is ordered if its (0, 0) element is 1, its (0, 1) element is 2, 
and so on. Your function needs to create an a × b matrix. 
a is the first argument and b is the second.
EXAMPLE:
    orderedMatrix(5, 5) ➞ {
      {1, 2, 3, 4, 5},
      {6, 7, 8, 9, 10},
      {11, 12, 13, 14, 15},
      {16, 17, 18, 19, 20},
      {21, 22, 23, 24, 25}
    }
    orderedMatrix(1, 1) ➞ {{1}}
    orderedMatrix(1, 5) ➞ {{1, 2, 3, 4, 5}}
*/

vector<vector<int>> orderedMatrix(int a, int b) {
    vector<vector<int>> res;

    int counter = 1;
    for (int i = 0; i < a; ++i) {
        vector<int> tmp = {};
        for (int j = 0; j < b; ++j) {
            tmp.push_back(counter);
            counter++;
        }
        res.push_back(tmp);
    }
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    for (vector<int> i : orderedMatrix(a, b)) {
        for (int j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}