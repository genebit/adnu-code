#include <iostream>
#include <cstdio>
#include <iomanip>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    init();

    string str;
    getline(cin, str);
    
    stringstream ss(str);
    string words;
    while (ss >> words)
        cout << words << endl;

    return 0;
}