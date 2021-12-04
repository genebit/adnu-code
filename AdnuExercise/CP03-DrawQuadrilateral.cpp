#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

/*
Display on screen a quadrilateral with width w and height h using character c.
SAMPLE INPUT:
    3 5 &

SAMPLE OUTPUT:
    & & & 
    & & & 
    & & & 
    & & & 
    & & & 
*/
using namespace std;

int main() {
    int width, height;
    char character;

    cin >> width >> height >> character;

    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j)
            cout << character << " ";
        cout << endl;
    }
    return 0;
}