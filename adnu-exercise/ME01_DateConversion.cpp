//******************************************************************
// Filename:
// Date: October 11, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: ME01 Date Conversion
// Program Description: Create a program that converts the displayed format to a date.
// Input: Consists of a date mm/dd/yyyy
// Output: Display the mount to a word month, separated with spaces comma, and padding to the integer for year and date.
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
#include <iomanip>

int main() {
    int month, date, year; // Initialize a variables for the input mm/dd/yyyy
    char forslash; // Declare a variable forslah for handling the slash in input
    
    // Recieve input and assign values to month, date, year and forslash
    std::cin >> month >> forslash >> date >> forslash >> year;
    
    // Create an array that will list the words 
    std::string months[12] = { "Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec" };

    std::cout << months[month - 1] << " ";
    std::cout << std::setfill('0') << std::setw(2) << date;
    std::cout << ", " << std::setfill('0') << std::setw(4) << std::right << year << std::endl;

    // ----------------------
    // Alternative Solution (Using Switch Case)
    // ----------------------
    /*
    switch (months) {
        case 1:
            std::cout << "Jan ";
            std::cout << std::setfill('0') << std::setw(2) << date;
            std::cout << ", " << std::setfill('0') << std::setw(4) << std::right << year << std::endl;
            break;
        case 2:
            std::cout << "Feb ";
            std::cout << std::setfill('0') << std::setw(2) << date;
            std::cout << ", " << std::setfill('0') << std::setw(4) << std::right << year << std::endl;
            break;
        case ...
            ...
            break;
    }
    */
  return 0;
}