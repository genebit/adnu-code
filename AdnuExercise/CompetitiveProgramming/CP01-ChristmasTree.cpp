#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

/*
Write a program that prints an illustration of a Christmas tree 
given its height. Keep in mind that the number of hashtags used 
at the base of the tree is always equal to its height.
SAMPLE INPUT:
    3
SAMPLE OUTPUT:
      # 
     # # 
    # # # 
*/
using namespace std;

int main() {
    int height;
    cin >> height;

    vector<string> res;
    for (int i = 0; i < height; ++i) {
        string tmp = "";
        for (int j = 0; j <= i; ++j)
            tmp += "# ";
        res.push_back(tmp);
    }

    for (int i = 0; i < res.size(); ++i) {
        string spaces = "";
        for (int j = height-1; j > i; --j)
            spaces += " ";
        cout << spaces + res[i] << endl;
    }

    return 0;
}