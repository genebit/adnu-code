#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

void buildStaircase(int size) {
    string stairs[size];
    for (int i = 0; i < size; ++i) {
        string steps;
        for (int j = 0; j <= i; ++j) {
            steps += "#";
        }
        stairs[i] = steps;
    }

    for (string i : stairs)
        cout << setfill(' ') << setw(size) << i << endl;
}

int main() {
    int staircase_size;
    cin >> staircase_size;

    buildStaircase(staircase_size);
    return 0;
}