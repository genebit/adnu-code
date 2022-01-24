#include <iostream>

using namespace std;

int main() {
    int size;
    cin >> size;

    for (int i = 0; i < size; i++) {
        int num_of_char;
        char symbol;
        cin >> num_of_char >> symbol;

        // Output
        for (int j = 0; j < num_of_char; j++) 
            cout << symbol;
        cout << endl;
    }
    return 0;
}