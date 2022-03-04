#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // PROBLEM: NUMBER TRIANGLE
    int size;
    while (cin >> size) {
        for (int i = 1; i <= size; ++i) {
            for (int j = 0; j < i; ++j) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}