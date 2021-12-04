#include <iostream>
#include <vector>
#include <string>
/*
Capitalize the Names
Create a function that takes an array of names and returns an array where only the first letter of each name is capitalized.

EXAMPLES:
    capMe(["mavis", "senaida", "letty"]) 
        ➞ ["Mavis", "Senaida", "Letty"]
    capMe(["samuel", "MABELLE", "letitia", "meridith"]) 
        ➞ ["Samuel", "Mabelle", "Letitia", "Meridith"]
    capMe(["Slyvia", "Kristal", "Sharilyn", "Calista"]) 
        ➞ ["Slyvia", "Kristal", "Sharilyn", "Calista"]
NOTES:
    Don't change the order of the original array.
    Notice in the second example above, "MABELLE" is returned as "Mabelle".
*/
using namespace std;

vector<string> cap_me(vector<string> arr) {
    vector<string> res;

    for (int i = 0; i < arr.size(); ++i) {
        // 32 is the gap for being lowercase and uppercase in ASCII
        if (arr[i][0] >= 'a') arr[i][0] -= 32;
        for (int j = 1; j < arr[i].size(); ++j) {
            if (arr[i][j] <= 'Z') arr[i][j] += 32;
        }
        res.push_back(arr[i]);
    }
    return res;
}

int main() {
    // Recieve input
    string str;
    vector<string> arr;
    while (cin >> str) {
        arr.push_back(str);
    }
    // Output
    for (string i : cap_me(arr)) {
        cout << i << endl;
    }
    return 0;
}