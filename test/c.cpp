#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

/*
Create a function that takes an array of strings and return an array, 
sorted from shortest to longest.

EXAMPLE:
    sortByLength(["Google", "Apple", "Microsoft"])
    ➞ ["Apple", "Google", "Microsoft"]
*/

void init() {
    freopen("../in.txt", "r", stdin);
    freopen("../out.txt", "w", stdout);
}

vector<string> sort_by_length(vector<string> arr) {
    vector<string> list;
    for (string i : arr) list.push_back(i);
    
}

int main() {
    init();
    
    return 0;
}