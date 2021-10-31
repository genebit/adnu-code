//******************************************************************
// Filename:
// Date: October 11, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: ME05 What Operation?
// Program Description: Create a program that takes 2 int and perform specific operation per conditions
// Input: Consists of 2 integer a and b separated by spaces
// Output: Display the result of the operation performed based on the condition
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
    int a, b; // Declare variables a and b for input
    std::cin >> a >> b; // Receive input and assign to a and b
    // Declare variable result for handling the results of a and b per condition
    int result; 
    
    // The 3 conditions. If true then assign the given formula for result
    if (a > b) result = a - b;
    if (a < b) result = a + b;
    if (a == b) result = a * b;
    
    // Output the result
    std::cout << result << std::endl;
    return 0;
}