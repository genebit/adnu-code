#include <iostream>

using namespace std;

int countVowels(string text) {
    int count = 0;

    char vowels[] = { 'a' , 'e', 'i', 'o', 'u' };

    for (int i = 0; i < text.size(); i++) {
        if (text[i] == vowels[0] || text[i] == vowels[1] || text[i] == vowels[2] ||
            text[i] == vowels[3] || text[i] == vowels[4])
            count++;
    }
    return count;
}

int main() {
    // Create a function that takes a string and returns the number (count) 
    // of vowels contained within it.
    // Example:
    //      countVowels("Celebration") ➞ 5
    //      countVowels("Prediction") ➞ 4

    string text = "Prediction";
    cout << countVowels(text) << endl;

    return 0;
}