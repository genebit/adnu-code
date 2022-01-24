#include <iostream>

using namespace std;

int main() {
    int num;
    while (cin >> num) {
        // Is divisible by 2, 3, or 5 answers
        bool column[3] = {(num % 2 == 0), (num % 3 == 0), (num % 5 == 0)};

        // Output
        for (bool element : column)
            cout << element << " ";
        cout << endl;
    }
    return 0;
}