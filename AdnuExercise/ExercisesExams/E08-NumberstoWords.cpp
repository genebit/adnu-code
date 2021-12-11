//******************************************************************
// Filename: EO8 Numbers to Words
// Date: September 25, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: EO8 Numbers to Words
// Program Description: Turn the input numbers into words
// Input: A single integer
// Output: Display the words of the numbers only from -10 to 10 else display it is either greater 10 or less than -10
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
    std::string words[11] = { // List of english words from 0 to 10
        "zero", "one", "two", "three", "four",
        "five", "six", "seven", "eight", "nine", "ten"  
    };

    // Recieve Input
    int input_num;
    std::cin >> input_num;

    // Process
    if (input_num >= -10 && input_num <= 10) { // Check 1
        if (input_num < 0) {
            input_num *= -1; // To convert negative to positive
            // Access the words list from the index of the input num given
            std::cout << "negative " + words[input_num] << std::endl; 
        } else {
            std::cout << words[input_num] << std::endl;
        }
    }
    if (input_num < -10) { // Check 2
      std::cout << "Less than -10" << std::endl;
    }
    if (input_num > 10) { // Check 3
      std::cout << "Greater than 10" << std::endl;
    }
    return 0;
}