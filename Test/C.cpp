#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

bool isInOrder(string str) {
    vector<char> letters;
    for (char c : str) letters.push_back(c);

    if (is_sorted(letters.begin(), letters.end())) return true;
    return false;
}

int main() {
    init();

    // string text = "edabit";
    // cout << isInOrder(text) << endl;

    string str;
    getline(cin, str);

    cout << str;
    return 0;
}