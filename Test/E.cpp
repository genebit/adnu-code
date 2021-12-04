#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

long int paths(int n) {
    // Factorial
    // 4! = 4x3x2x1 = 24
    int res = 1;

    for (int i = n; i > 0; i--) {
        res *= i;
    }
    return res;
}

int main() {
    init();

    cout << paths(4) << endl;

    return 0;
}