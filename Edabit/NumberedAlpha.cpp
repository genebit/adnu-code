#include <iostream>
#include <cstdio>

using namespace std;

std::string numberedAlphabet(std::string str) {
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

                if (i < str.size() - 1) {
                    result += " ";
                }
            }
        }
    }
    return result;
}

int main() {
    /*
    Create a function that converts a string of letters to
    their respective number in the alphabet.
    A    B   C   D   E   F   G   H   I   J   K   L...
    0   1   2   3   4   5   6   7   8   9   10  11...

    EXAMPLE
         alphNum("XYZ") ➞ "23 24 25"
         alphNum("ABCDEF") ➞ "0 1 2 3 4 5"
         alphNum("JAVASCRIPT") ➞ "9 0 21 0 18 2 17 8 15 19"
    NOTES
         Make sure the numbers are spaced.
         All letters will be UPPERCASE.
    */

    numberedAlphabet("ABCDE");

    return 0;
}