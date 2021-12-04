#include <iostream>
#include <string>

using namespace std;

/*
    Create a function that takes a sentence and turns every
    "i" into "wi",
    "e" into "we",
    "owo" at the end.
*/

string owofied(string sentence) {
    string owo;
    for (int i = 0; i < sentence.size(); i++) {
        string temp = "";
        if (sentence[i] == 'i') {
            temp += sentence[i];
            temp = "wi";
            owo += temp;
        }
        else if (sentence[i] == 'e') {
            temp += sentence[i];
            temp = "we";
            owo += temp;
        }
        else {
            owo += sentence[i];
        }
    }
    owo += " owo";
    return owo;
}

int main() {
    string str;
    getline(cin, str);

    cout << owofied(str) << endl;
    return 0;
}