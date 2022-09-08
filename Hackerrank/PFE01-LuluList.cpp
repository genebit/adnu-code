//******************************************************************
// Filename: 
// Date: November 17, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: PFE Lulu's List
// Program Description: Write a program to perform a simple arithmetic operations on a certain elements within the given list.
// Input: Input begins with an int N indicating the numbers of int in the list. Followed by an int T indicating the num of int N that comprise the list. each with 2 int a and b and a char c which indicates that a and b are the positions of the list elements that will be used as operands in operation c.
// Output: display the results for each operation and determine if whether or not it is out of bounds (a and b) or invalid operator (c) or both.
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
    // Recieve Input
    int size, test_cases;
    cin >> size >> test_cases;
    
    int list[size]; // list of num
    for (int i = 0; i < size; i++) cin >> list[i];
    
    int index1, index2;
    char operation;
    
    // Process
    for (int i = 0; i < test_cases; i++) {
        bool out_of_bounds, valid_operator;    
        cin >> index1 >> index2 >> operation;

        if (operation != '+' && operation != '-' && operation != '*') 
            valid_operator = false;
        else valid_operator = true;

        if ((index1 > size || index2 > size) || (index1 == 0 || index2 == 0)) 
            out_of_bounds = true;
        else out_of_bounds = false;

        if (index1 > 0) index1 -= 1;
        if (index2 > 0) index2 -= 1;

        if (!out_of_bounds) {
            if (operation == '+') cout << (list[index1] + list[index2]) << endl;
            if (operation == '-') cout << (list[index1] - list[index2]) << endl;
            if (operation == '*') cout << (list[index1] * list[index2]) << endl;
            if (!valid_operator) cout << "Invalid Operator" << endl;        
        }
        else {
            if (out_of_bounds && !valid_operator) cout << "Out of Bounds and Invalid Operator" << endl;
            if (out_of_bounds && valid_operator) cout << "Out of Bounds" << endl;
        }
    }
    return 0;
}