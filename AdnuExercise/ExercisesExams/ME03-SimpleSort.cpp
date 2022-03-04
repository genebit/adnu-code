//******************************************************************
// Filename:
// Date: October 11, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: ME03 Simple Sort
// Program Description: Sort the given 3 integer and display the output
// Input: Consists of 3 int separated by spaces.
// Output: Display the 3 int in a sorted ascending order separated by space and display the original 3 int when read in a next line.
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
    // Declare variables for handling the input of 3 ints
    int a, b, c;
    std::cin >> a >> b >> c; // Receive and assign input
    
    // Create separate lists for unsorted and sorted
    int unsorted_list[3] = { a, b, c };
    int sorted_list[3] = { a, b, c }; // This array will eventually be sorted
    int size = 3; // the size of the array

    // Loop through the array
    for (int i = 0; i < size; ++i)
    {
        // Per index of i do this loop
        for (int j = i; j < size; ++j)
        {
            // Per index, check if the index inside of sorted list is greater than the 
            // next index on the list, from there, swap the 2 elements.
            // Continue this loop until it reaches the end of index.
            if (sorted_list[i] > sorted_list[j])
            {
                // Swapping formula
                // Create a temp for getting the prev value of i before it gets replaced.
                int temp = sorted_list[i]; 
                // Swap both elements in array.
                sorted_list[i] = sorted_list[j];
                sorted_list[j] = temp;
            }
        }
        // Output the first line which is the sorted array
        std::cout << sorted_list[i] << ' ';
    }
    std::cout << std::endl;
    // Output the second line which is the original unsorted array
    for (int i : unsorted_list) {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
    return 0;
}