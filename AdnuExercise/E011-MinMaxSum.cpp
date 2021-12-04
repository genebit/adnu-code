//******************************************************************
// Filename:
// Date: October 22, 2021
// Subject: CSDC101 - Introduction to Programming
// Semester: First Semester, S/Y 2020 - 2021
//
// Program Title: E011 Min Max Sum
// Program Description: Find the smallest and largest value in the list and add them for each list.
// Input: int N for the number of list, int T the number of int in the list.
// Output: Display the smallest and largest value from the list and display its sum for each line.
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
#include <sstream>
#include <algorithm>
#include <bits/stdc++.h>

using namespace std;
int main()
{
    int size; // Variable for N size of each list
    cin >> size;
    cin >> ws; // Ignore white space

    vector<vector<int>> list; 
    for (int i = 0; i < size; i++) {
        /* LOGIC: Store the list of num each line into a string,
            Parse it through stringstream and get the int,
            push all the num to a 2d array list.
        */
        string str;
        getline(cin, str);

        stringstream ss(str);
        int num;
        vector<int> temp;
        while (ss >> num) {
            temp.push_back(num);
        }
        list.push_back(temp);
    }

    for (int i = 0; i < list.size(); i++) { // Output
        sort(list[i].begin(), list[i].end());
        int min = list[i][0], max = list[i][list[i].size()-1];

        cout << min << " " << max << " ";
        cout << (min + max);
        cout << endl;
    }
    return 0;
}