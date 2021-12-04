#include <iostream>
#include <string>

using namespace std;

/*
Extract all the letters in the string and print it.
EXAMPLE:
    remove_number("g3n3b1tara") -> "gnbtara"
*/

string remove_number(string str) {
    string result;
    for (auto i : str) {
        if (i >= '0' && i <= '9') {
            continue;
        }
        result.push_back(i);
    }
    return result;
}

int main() {
    string str;
    getline(cin, str);

    cout << remove_number(str);
    return 0;
}