//******************************************************************
// Filename:
// Date: October 11, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: ME04 We Find Ways
// Program Description: Create a program that will check if the person can withdraw based on the given withdrawal amount and bank money amount using specific conditions.
// Input: Consists of 2 floating points, for withdraw amount and bank money.
// Output: Display the amount left in the bank money if the conditions are met for the withdraw.
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
    float withdraw_money, bank_money; // Declare variables for input
    float withdraw_deduction = 0.50; // Initialize a variable for the deduction amount
    // Receive input
    std::cin >> withdraw_money >> bank_money; 
    
    // Conditions:
    // if the withdraw_money is a multiple of 4 && has enough cash in her acc
    if (int(withdraw_money) % 4 == 0 && bank_money > withdraw_money) {
        // Allow withdraw from the bank_money
        bank_money = bank_money - withdraw_money - withdraw_deduction;
    }
    // Output the amount left in bank_money set to precision to 2 decimal places
    std::cout << std::fixed << std::setprecision(2) << bank_money << std::endl;
    return 0;
}