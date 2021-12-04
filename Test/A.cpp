#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
#include <bits/stdc++.h>

/*
Create a function that takes in a sentence as input and returns the most 
common last vowel in the sentence as a single character string.
EXAMPLE:
    commonLastVowel("Hello World!") ➞ "o"
    commonLastVowel("Watch the characters dance!") ➞ "e"
    commonLastVowel("OOI UUI EEI AAI") ➞ "i"

*/
using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

string commonLastVowel(string str) {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
    int counter[] = { 0, 0, 0, 0, 0 };

    vector<string> words;

    stringstream ss(str);
    string word;
    while (ss >> word) {
        for (char c : word)
            if (c <= 'Z') c += 32; // UPPERCASE to lowercase
        words.push_back(word);
    }

    for (int i = 0; i < words.size(); i++) {
        for (int j = 0; j < words[i].size(); j++) {
            for (int k = 0; k < 5; k++) {
                if (words[i][j] == vowels[k]) counter[k]++;
            }
        }
    }

    int temp = 0;
    char v;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (temp < counter[j]) {
                temp = counter[j];
                v = vowels[j];
            }
        }
    }

    string result;
    result.push_back(v);
    return result;
}

int main() {
    init();

    string str;
    getline(cin, str);

    cout << commonLastVowel(str) << endl;
    return 0;
}