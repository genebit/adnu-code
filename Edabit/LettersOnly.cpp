#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
    Remove non-letters from a a string
*/

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

string lettersOnly(string str) {
    string res;
    for (int i = 0; i < str.size(); i++)
        if (str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
            res += str[i];

    return res;
}

int main() {
    init();

    string str;
    getline(cin, str);

    cout << lettersOnly(str) << endl;
    return 0;
}