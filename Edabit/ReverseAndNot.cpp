#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
Write a function that takes an integer i and returns a string with 
the integer backwards followed by the original integer.
    EXAMPLE:
        123 -> "321123"
        123456789 -> "987654321123456789"
*/

string reverseAndNot(int num) {
    string orig = to_string(num);
    string rev;

    for (int i = orig.size()-1; i >= 0; i--) {
        rev.push_back(orig[i]);
    }
    return (rev + orig);
}

int main() {
    int num;
    cin >> num;

    cout << reverseAndNot(num) << endl;    
    return 0;
}