#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

int main()
{
    // Make this into a game.
    // Guess the random number.
    // Provide clues on where the number is.
    // Give 3 lives to guess.
    
    srand((unsigned)time(0));
    int randomNumber = (rand() % 10);

    cout << randomNumber << endl;

}