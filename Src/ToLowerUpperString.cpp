#include <iostream>
#include <string>

using namespace std;

void toUpper(string& str) {
    for (int i = 0; i < str.size(); i++) {
        bool isAlphabet = (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z');
        if (isAlphabet) {
            if (str[i] >= 'a') str[i] -= 32; // lowecase -> UPPERCASE
        }
    }
}

void toLower(string& str) {
    for (int i = 0; i < str.size(); i++) {
        bool isAlphabet = (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z');
        if (isAlphabet) {
            if (str[i] <= 'Z') str[i] += 32; // UPPERCASE -> lowercase
        }
    }
}
int main() {
    string str;
    getline(cin, str);

    toLower(str);

    cout << str << endl;
    return 0;
}