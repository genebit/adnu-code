#include <iostream>
#include <string>
#include <vector>

using namespace std;
/*
Create a function that counts the number of times a particular
letter shows up in the word search.

letterCounter([
        ["D", "E", "Y", "H", "A", "D"],
        ["C", "B", "Z", "Y", "J", "K"],
        ["D", "B", "C", "A", "M", "N"],
        ["F", "G", "G", "R", "S", "R"],
        ["V", "X", "H", "A", "S", "S"]
    ], "D") ➞ 3

"D" shows up 3 times: twice in the first row, once in the third row.
*/

int letterCounter(vector<vector<char>> arr, char c) {
    int counter = 0;
    for (int i = 0; i < arr.size(); ++i) {
        for (int j = 0; j < arr[i].size(); ++j) {
            if (arr[i][j] == c) counter++;
        }
    }
    return counter;
}

int main() {
    vector<vector<char>> arr = {
        {'D', 'E', 'Y', 'H', 'A', 'D'},
        {'C', 'B', 'Z', 'Y', 'J', 'K'},
        {'D', 'B', 'C', 'A', 'M', 'N'},
        {'F', 'G', 'G', 'R', 'S', 'R'},
        {'V', 'X', 'H', 'A', 'S', 'S'}
    };

    char char_to_find = 'D';

    cout << letterCounter(arr, char_to_find) << endl;
    return 0;
}