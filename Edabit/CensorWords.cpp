#include <iostream>

using namespace std;

/*
Someone has attempted to censor my strings by replacing every vowel with a *, l*k* th*s. Luckily, I've been able to find the vowels that were removed.
Given a censored string and a string of the censored vowels, return the original uncensored string.

Example
    uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") ➞ "Where did my vowels go?"
    uncensor("abcd", "") ➞ "abcd"
    uncensor("*PP*RC*S*", "UEAE") ➞ "UPPERCAS

Notes
    The vowels are given in the correct order.
    The number of vowels will match the number of * characters in the censored string.

*/

string uncensor(string str, string vowels) {
    string result;

    // Assign the values of vowels to a list
    const int size = vowels.size();
    char vow[size];
    for (int i = 0; i < size; i++) { vow[i] = vowels[i]; }

    // Process
    int j = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '*') {
            result += vow[j];
            j++;
        }
        else { result += str[i]; }
    }
    return result;
}

int main() {
    cout << uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo");
    return 0;
}