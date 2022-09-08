#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main() {
    // Make this into a game.
    // Guess the random number.
    // Provide clues on where the number is.
    // Give 3 lives to guess.

    srand((unsigned)time(0));

    int randomNumber[10]; // Creates a random Number by range of 10

    cout << "Random Numbers:\n";
    for (int i = 0; i < 10; i++) {
        randomNumber[i] = (rand() % 10);
        cout << randomNumber[i] << " ";
    }
    cout << endl;
    return 0;
}