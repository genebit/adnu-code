#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

string uncensor(string str, string vowels) {

    char missing_char[vowels.size()];
    for (int i = 0; i < vowels.size(); i++) {
        missing_char[i] = vowels[i];
    }

    string result;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] == '*')
            str[i] = missing_char[i];
        result += str[i];
    }
    return result;
}

int main() {
    init();
    
    string in;
    getline(cin, in);
    string cencored;
    getline(cin, cencored);

    cout << uncensor(in, cencored);

    return 0;
}