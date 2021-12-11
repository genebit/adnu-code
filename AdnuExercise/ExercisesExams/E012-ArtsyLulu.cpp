//******************************************************************
// Filename:
// Date: October 21, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: E012 Artsy Lulu
// Program Description: Create a program that draws left-aligned triangles using consecutive letters of the alphabet given by the height specified.
// Input: Consists of 2 input separated by space (character for the letters to draw and int for the specified height).
// Output: Display the corresponding triangles and determine if a triangle can be formed else display "INVALID".
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
#include <string>
#include <vector> // For handling vector arrays lists.

int main() {
    // List handler for for inputs c and s
    std::vector<char> characters;
    std::vector<int> tri_size;

    // Variables for handling the inputs per line.
    char input_c;
    int input_s;
    while (std::cin >> input_c >> input_s) {
        // For every input, store the values to the characters and char_size array
        characters.push_back(input_c);
        tri_size.push_back(input_s);
    }

    // Declare an array of strings "results" 
    // for handling the results such as the triangle formation or INVALID.
    std::vector<std::string> results;
    
    // For each elements in the array "characters"
    for (int i = 0; i < characters.size(); i++) {
        // Assign a temp char to be used for incrementing 
        // without overriding the original values of the char.
        char c_tmp = characters[i]; 
        std::string tmp = ""; // string temp to be stored in the "results" array.
        
        // Based on the specified traingle size on each index of char_size...
        for (int j = 0; j < tri_size[i]; j++) {
            // Repeat the characters along the string to form the triangle
            for (int k = 0; k <= j; k++) {
                tmp += c_tmp;
                tmp += " ";
            }
            // Once finished, increment the next character
            // 
            if (c_tmp <= 126) {
                tmp += "\n"; // Add a newline to the string to form the triangle
                c_tmp++;
            }
            // Conditions for when to display "INVALID"
            // If the character is exceeds z = 122 in ascii value.
            // and if the specified size is less than 2
            if (c_tmp > int('z')+1 || tri_size[i] < 2) {
                tmp = "INVALID\n";
            }
        }
        results.push_back(tmp); // Store the value of tmp string whether INVALID or not
    }
    
    // OUTPUT
    for (std::string result : results) {
        std::cout << result << std::endl;
    }

    return 0;
}