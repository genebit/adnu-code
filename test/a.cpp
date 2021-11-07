#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

string common_last_vowel(string str) {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
    vector<int> counter = { 0, 0, 0, 0, 0 };

    string res;
    for (int i = 0; i < str.size(); i++) {
        for (int j = 0; j < 5; j++) {
            if (str[i] == vowels[j]) {
                counter[j]++;
            }
        }
    }
    // Debug
    for (int i : counter) cout << i << " "; 

    return res;
}

int main() {
    init();
        
    cout << common_last_vowel("aaaeeee") << endl;
    return 0;
}