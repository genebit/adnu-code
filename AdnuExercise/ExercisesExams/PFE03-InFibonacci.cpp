//******************************************************************
// Filename: 
// Date: November 17, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: PFE In Fibonacci
// Program Description: Sana wants to know if a number appears in the Fibonacci Sequence.
// Input: Begins with an int N indicating the numbers of int to be checked.
// Output: For each int M determine if the num are in a fibonacci seq displaying the character Y if it is found and N otherwise.
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
    // Receive input
    int size;
    cin >> size;
    
    int list[size]; // Store num into a list
    for (int i = 0; i < size; i++) cin >> list[i];

    int fibonacci_sequence[40];
    int first_term = 0;
    int second_term = 1;
    
    // Since the constraints for M numbers are only 10^8, I limited the seq to only at 
    // the 40th term because at the 40th term the digits where as the same as a 10^8 digit. 
    const int LIMIT = 40;
    for (int i = 0; i < LIMIT; i++) {
        // Formula for getting next seq within a fibonacci seq.
        int next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;
        // Store the results in an array to be used for cheking later.
        fibonacci_sequence[i] = next_term;
    }

    for (int i = 0; i < size; i++) {
        bool is_found = false;
        for (int j = 0; j < 40; j++) {
            // If the numbers were found within the seq then say it is true
            if (list[i] == fibonacci_sequence[j])
              is_found = true;
        }
        // Output
        if (is_found) cout << "Y ";
        else cout << "N ";
    }
    return 0;
}