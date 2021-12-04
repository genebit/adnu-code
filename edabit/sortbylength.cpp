#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/*
Create a function that takes an array of strings and return an array, 
sorted from shortest to longest.

EXAMPLE:
    sort_by_length(["Google", "Apple", "Microsoft"])
        ➞ ["Apple", "Google", "Microsoft"]

    sort_by_length(["Leonardo", "Michelangelo", "Raphael", "Donatello"])
        ➞ ["Raphael", "Leonardo", "Donatello", "Michelangelo"]

    sort_by_length(["Turing", "Einstein", "Jung"])
        ➞ ["Jung", "Turing", "Einstein"]

*/
using namespace std;

vector<string> sort_by_length(vector<string> arr) {
    vector<string> result;
    vector<int> char_length;

    for (string element : arr) char_length.push_back(element.size());

    sort(char_length.begin(), char_length.end());
    for (int i = 0; i < arr.size(); ++i) {
        string str = "";
        for (string element : arr) {

            if (char_length[i] == element.size()) str = element;
        }
        result.push_back(str);
    }
    return result;
}

int main() {
    // Recieve input
    string str;
    vector<string> arr;
    while (cin >> str) {
        arr.push_back(str);
    }
    // Output
    for (string i : sort_by_length(arr)) {
        cout << i << endl;
    }
    return 0;
}