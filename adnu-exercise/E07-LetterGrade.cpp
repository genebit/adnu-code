//******************************************************************
// Filename: EO7 Letter Grade
// Date: September 25, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: EO7 Letter Grade
// Program Description: Automatically see the letter grade of the students
// Input: Consists of 2 lines: 1st is a string and second is an integer
// Output: Display the name of the student, the grade and the letter grade based on the grade
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
#include <string> // To access the std::to_string() function

int main() {
    // Declare variables
    std::string student_name;
    int student_grade = 0;
    std::string letter_grade;
    
    // Recieve Input
    getline(std::cin, student_name);
    std::cin >> student_grade;
    
    // Check if the student grades is greater than 65 to process the grade
    if (student_grade >= 65) {
        // Compare the int grade if it's in between the requirement to reach the specified letter grade
        if (student_grade >= 96 && student_grade <= 100)    letter_grade = "A";    
        if (student_grade >= 91 && student_grade <= 95)     letter_grade = "B+";
        if (student_grade >= 86 && student_grade <= 90)     letter_grade = "B";
        if (student_grade >= 81 && student_grade <= 85)     letter_grade = "C+";
        if (student_grade >= 76 && student_grade <= 80)     letter_grade = "C";
        if (student_grade == 75)                            letter_grade = "D";
        if (student_grade >= 65 && student_grade <= 74)     letter_grade = "F";
        
        // Display the output
        std::cout << student_name + " has a numerical grade of " + std::to_string(student_grade) + " equivalent to a letter grade of " + letter_grade;
    }
    else { 
        // If the int grade did not meet 65 above grade
        std::cout << "INVALID INPUT"; 
    }
        
    return 0;
}