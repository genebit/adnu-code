//******************************************************************
// Filename: 
// Date: November 17, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: PFE Mutant Minion
// Program Description: Help Gru to count how many minions can he transmorgrified
// Input: The first line contains int T (the number of test cases) each test case is then described in 2 lines: the first line: N, K, the second line: N int indicating the characteristics of each minions
// Output: Count how many minions can become wolverine like for each cases
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
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int N, K;
        cin >> N >> K;

        int results[N]; 
        for (int j = 0; j < N; j++) {
          cin >> results[j];
          results[j] += K; // Add the 'K' Values to the characteristics the change values of the elements within the results.
        }

        // Output
        int counter = 0;
        for (int k = 0; k < N; k++) {
          if (results[k] % 7 == 0)
            counter++; // Determine if it can become wolverine-like.
        }
        cout << counter << endl;
    }
    
    return 0;
}