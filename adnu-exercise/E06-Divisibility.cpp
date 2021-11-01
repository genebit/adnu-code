//******************************************************************
// Filename: EO6 Divisibility
// Date: September 25, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: EO6 Divisibility
// Program Description: Determine if the given set of numbers is divisible by 2, 3, 5
// Input: Consists of 3 integer n separated with space.
// Output: display a line composed of 3 int separated by space with the value of n's divisiblity by 2, 3, 5 per row.
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

int main() {
    // Recieve 3 integer input
    int a, b, c;
    std::cin >> a >> b >> c;

    // Store the input into an array list
    int input[3] = { a, b, c };
    // Store the numbers that will be checked if its divisibly by the input
    int divisibleBy[3] = { 2, 3, 5 };
    
    // Create a nested for loop to create a 3x3 table
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            // 1. Access first the indexes of the input list
            //    check if it's divisible by the "divisbleBy" list indexes
            // 2. Get the boolean value from the modulus operator 
            //    and display each check with spaces
            std::cout << (input[i] % divisibleBy[j]==0) << ' ';
        }
        std::cout << std::endl; // Create a new line per row process
    }
    
    return 0;
}