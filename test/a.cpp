#include <iostream>
#include <cstdio>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    init();
    
    string str = "XYZ";

    string result;
    char letter = 'A';
    char alphabet[26];

    for (int i = 0; i < 26; ++i) {
        alphabet[i] = letter;
        letter++;
    }

    for (int i = 0; i < str.size(); ++i) {
        for (int j = 0; j < 26; ++j) {
            if (str[i] == alphabet[j]) {
                result += to_string(j);

                if (i < str.size()-1) {
                    result += " ";
                }
            }
        }
    }
    cout << result << endl;

    return 0;
}