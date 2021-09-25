#include <iostream>
#include <string>
#include <vector>
#include <bits/stdc++.h>

// Create a function that takes two arguments of an array of numbers arr
// and a constant number n and returns the n largest numbers from the given array.\

// SAMPLE OUTPUT
//      largestNumbers(2, [4, 3, 2, 1]) ➞ [3, 4]
//      largestNumbers(1, [7, 19, 4, 2]) ➞ [19]
//      largestNumbers(3, [14, 12, 57, 11, 18, 16]) ➞ [16, 18, 57]
//      largestNumbers(0, [1, 3, 4, 2]) ➞ []

std::vector<int> largestNumbers(int n, std::vector<int> arr)
{
    std::vector<int> res;
    sort(arr.begin(), arr.end());
    for (int i = arr.size() - n; i < arr.size(); i++)
        res.push_back(arr[i]);

    return res;
}

int main()
{
    // Inputs
    std::vector<int> arr = { 7, 19, 4, 2 };
    int n = 2;

    // Display the Output of the largest Numbers
    for (int i : largestNumbers(n, arr))
        std::cout << i << " ";
    
    return 0;
}