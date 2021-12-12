#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <string.h>

using namespace std;

int reverse(int num) { // Solution to reverse a number
    int reversedNumber = 0, remainder;

    while(num != 0) {
        remainder = num % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        num /= 10;
    }
    return reversedNumber;
}

bool isPalindrome(string str) {
    string reversed_str = str; // Stores the reverse of the string str
    reverse(reversed_str.begin(), reversed_str.end()); // Reverse the string
 
    // If str is equal to reversed_str
    if (str == reversed_str)    return true;
    else                        return false;
}

int main() {
    // PROBLEM: CAN'T GET ENOUGH WITH PALINDROME!
    int num, reveresed_num;

    while (cin >> num) {
        int counter = 0;
        int orig_term = num, reversed_term = reverse(num);
        int sum;

        bool no_palindrome_found = false;
        for (int i = 0; i < 10; ++i) {
            sum = orig_term + reversed_term;
            /* cout << orig_term << " + " << reversed_term << " = " << sum << endl; -> DEBUG */
            
            orig_term = sum;
            reversed_term = reverse(sum);
            
            counter++;
            if (isPalindrome(to_string(sum)))   break;
            if (i == 10-1 && !isPalindrome(to_string(sum))) no_palindrome_found = true;
        }
        if (no_palindrome_found)    cout << "NONE " + to_string(sum) << endl;
        else                        cout << "YES " + to_string(counter) << endl;

    }

    return 0;
}