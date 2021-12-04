#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool isInOrder(string str) {
    vector<char> letters;
    for (char c : str) letters.push_back(c);

    if (is_sorted(letters.begin(), letters.end())) return true;
    return false;
}

int main() {
    string text = "edabit";
    cout << isInOrder(text) << endl;
    
    return 0;
}