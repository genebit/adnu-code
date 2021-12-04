//******************************************************************
// Filename:
// Date: October 11, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: ME02 Bob's Burgers
// Program Description: Help Bob compute his sales and determine if he met his quota.
// Input: Consists of 3 lines, 1 for quota, 2, for the prices that he was able to sell, 3 for the total tip
// Output: Display the conclusion when computed the sales along with the specified conditions whether or not he met his quota.
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
    // Declare variables for input
    float quota;
    float price1, price2, price3, price4, price5;
    float total_tip;
    
    // Recieve Input
    std::cin >> quota;
    std::cin >> price1 >> price2 >> price3 >> price4 >> price5;
    std::cin >> total_tip;
    
    // Compute the total amount that Bob sell
    float total_sale = price1 + price2 + price3 + price4 + price5;

    // Declare the variable conclusion for displaying the output
    std::string conclusion;

    float total = (total_sale + total_tip);
    
    if (total < quota) { // Condition 1, assign to conclusion if true
        conclusion = "You need to sell more!";
    }
    if (total >= quota) { // Condition 2, assign to conclusion if true
        conclusion = "Quota has been met!";
    }
    if (total > quota && total < (2 * quota)) { // Condition 3, assign to conclusion if true
        conclusion = "Great job!";
    }
    if (total >= (2 * quota)) { // Condition 4, assign to conclusion if true
        conclusion = "You’re such a pro!";
    }
    
    std::cout << conclusion; // Display the output
    
    return 0;
}