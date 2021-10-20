//******************************************************************
// Filename:
// Date: October 20, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: E09 Drawing Characters
// Program Description: List repeated characters based on the given int input on how long will the characters be.
// Input: 1 integer for how many characters to display, 1 integer for the length of the characters and 1 char for the character to repeat.
// Output: Display the characters with repeated char based on the length given.
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
#include <vector>

int main() {
    // Declare int num for handling how many the char will the program take to repeat.
    int num;
    std::cin >> num;
    
    // Declare variables for holding the length 
    // and the char (Will be overrided for every iteration)
    int length;
    char characters;
    
    // Create a list of results containing the repeated characters 
    // which will be used to display later.
    std::vector<std::string> result;
    
    for (int i = 0; i < num; i++) {
        std::cin >> length >> characters; // Assign values to length and char
        
        // A temporary holder to be added on the array "result"
        std::string temp;
        temp.append(length, characters); // The process for determining how many characters to add based on the length
        result.push_back(temp);
    }
    
    // Output the results for every index in the vector array "result"
    for (std::string item : result) {
        std::cout << item << std::endl;
    }
    return 0;
}