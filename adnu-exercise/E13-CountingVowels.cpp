//******************************************************************
// Filename:
// Date: November 12, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: E13 Counting Vowels
// Program Description: Given a list of char, count the numbers of vowel letters.
// Input: each line of input begins with int N indicating the num of char will be on the list
// Output: display the counter for how many vowels occured on the each list/line.
//
// Honor Code:
//   This is my own program. I have not received any
//   unauthorized help in completing this work. I have not
//   copied from my classmate, friend, nor any unauthorized
//   resource. I am well aware of the policies stipulated
//   in the handbook regarding academic dishonesty. If proven
//   guilty, I won't be credited any points for this activity.
//
// Complete Name: Johcel Gene T. Bitara
// ID Number: 202100012
// Year-Course: 1-BSIT
// DCS, College of Computer Studies
// Ateneo de Naga University
//******************************************************************

#include <iostream>

using namespace std;

int main() {
    // Lists of vowels (lowercase and uppercase).
    char vowels[5][5] = {{ 'a', 'e', 'i', 'o', 'u' },
                        { 'A', 'E', 'I', 'O', 'U' }};
    string line;
    while (getline(cin, line)) { // Recieve input
        int counter = 0; // Declare and initialize the counter foreach line
        for (int i = 1; i < line.size(); i++) {
            for (int j = 0; j < 5; j++) { // Simply check if the num's char is found on the list of vowels.
                if (line[i] == vowels[0][j] || line[i] == vowels[1][j]) {
                    counter++; // Increment the counter.
                }
            }
        }
        cout << counter << endl;
    }
    return 0;
}