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

using namespace std;
int main()
{
    // Declare N for handling the num of list
    int num_of_list;
    cin >> num_of_list;
    cin >> ws; // Ignore whitespace

    // Get each line and store it to a vector array
    vector<string> str_list;
    for(int i = 0; i < num_of_list; i++)
    {
        string temp; // Store the line in this temp string
        getline(cin, temp);
        str_list.push_back(temp); // Store the values of temp to the str_list
    }
    
    // Convert the string to an integer and store it through a temp vector array 
    // Which will then be stored to a 2D array where each indexes is the list of num.
    vector<vector<int>> list_of_num;
    for (int i = 0; i < str_list.size(); i++) {
        stringstream ss(str_list[i]);
        int num;
        vector<int> temp;
        while (ss >> num) {
            temp.push_back(num);
        }
        list_of_num.push_back(temp);
    }
    
    // OUTPUT
    for (int i = 0; i < list_of_num.size(); i++) {
        // Sort the unsorted list to locate min and max of element.
        sort(list_of_num[i].begin(), list_of_num[i].end());
        
        // For each list in the list_of_num output its min and max.
        int min = list_of_num[i][i];
        int max = list_of_num[i][list_of_num[i].size() - 1];
        cout << min << " " << max << " " << (min + max);
        cout << endl;
    }
    return 0;
}