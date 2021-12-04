//******************************************************************
// Filename:
// Date: October 20, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: E010 The Odd Bunch
// Program Description: Given the set list of numbers, determine how many numbers that are an odd number.
// Input: list of int numbers.
// Output: Count how many numbers in the list were odd numbers.
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
    // Declare variable num for handling the numbers in the given list of int
    int num;
    int counter = 0; // For outputing the count for how many odd numbers
    
    while (std::cin >> num) {
        if (num % 2 != 0) { // Check if num is not divisible by 2 
            counter++; // Increment the counter since it is odd
        }
    }
        
    // Display the counter
    std::cout << counter << std::endl;
    return 0;
}