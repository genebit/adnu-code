//******************************************************************
// Filename:
// Date: November 12, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: E14 Even from End
// Program Description: Given a list of int, get the num that is even among the list.
// Input: each line of input begins with int N indicating the num of int will be on the list
// Output: display the even num from the end of list.
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
#include <sstream>
#include <vector>

using namespace std;

int main() {
    string line;
    vector<vector<int>> lists;

    // Read and store the raw input int into a 2D Array.
    while (getline(cin, line)) {
        int num;
        stringstream ss(line);
        vector<int> tmp;
        while (ss >> num) {
            tmp.push_back(num);
        }
        tmp.erase(tmp.begin());
        lists.push_back(tmp);
    }
    // Process the numbers on the lists and get the results.
    vector<vector<int>> results;
    for (int i = 0; i < lists.size(); ++i) {
        vector<int> tmp;
        for (int j = 0; j < lists[i].size(); ++j) {
            if (lists[i][j] % 2 == 0) {
                tmp.push_back(lists[i][j]);
            }
        }
        results.push_back(tmp);
    }
    // Output
    for (int i = 0; i < lists.size(); ++i) {
        // Print out the results from the end of list.
        for (int j = results[i].size()-1; j >= 0; --j) {
            cout << results[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}