#include <iostream>

using namespace std;

/*
Create a function to determine if the sum of all the individual even
digits are greater than the sum of all the individual odd digits in a
string of numbers.

- If the sum of odd numbers is greater than the sum of even numbers, return "Odd is greater than Even".
- If the sum of even numbers is greater than the odd numbers, return "Even is greater than Odd".
- If the sum of both even and odd numbers are equal, return "Even and Odd are the same".
EXAMPLE:
    evenOrOdd("22471") ➞ "Even and Odd are the same"
    evenOrOdd("213613") ➞ "Even and Odd are the same"
    evenOrOdd("23456") ➞ "Even is greater than Odd"
*/

string evenOrOdd(string str) {
    int odd = 0, even = 0;

    for (int i = 0; i < str.size(); ++i) {
        if (str[i] >= '0' && str[i] <= '9') { // Check if it's an integer
            int num = str[i] - '0';
            (num % 2 == 0) ? even += num : odd += num; // <condition> ? true : false;
        }
    }

    if (even > odd) return "Even is greater than Odd";
    else if (odd > even) return "Odd is greater than Even";
    else return "Even and Odd are the same";
}

int main() {
    string str;
    getline(cin, str);

    cout << evenOrOdd(str) << endl;
    return 0;
}