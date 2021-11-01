#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

int main() {
    init();

    char c = 'o';
    int height;
    cin >> height;

    string result;
    for (int i = 0; i < height; ++i) {
        result.push_back(c);
        cout << setfill(' ') << setw(3) << result << endl;
    }

    return 0;
}