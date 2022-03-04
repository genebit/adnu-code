#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
An Array is special if all elements are even numbers or all elements are odd in array
if there is mix numbers that are odd and even then say its false

EXAMPLE:
    isSpecialArray([2, 7, 4, 9, 6, 1, 6, 3]) ➞ true
    // Even indices: [2, 4, 6, 6]; Odd indices: [7, 9, 1, 3]

    isSpecialArray([2, 7, 9, 1, 6, 1, 6, 3]) ➞ false
    // Index 2 has an odd number 9.

    isSpecialArray([2, 7, 8, 8, 6, 1, 6, 3]) ➞ false
    // Index 3 has an even number 8.
*/  

bool isSpecialArray(vector<int> arr) {

    int even_counter = 0, odd_counter = 0;

    for (int i = 0; i < arr.size(); i+=2)
        if (arr[i] % 2 == 0)    even_counter++;

    for (int i = 1; i <= arr.size(); i+=2)
        if (arr[i] % 2 != 0)    odd_counter++;

    return (even_counter == odd_counter) ? true : false;
}

int main() {
    vector<int> temp;

    int num;
    while (cin >> num) {
        temp.push_back(num);
    }

    cout << isSpecialArray(temp) << endl;

    return 0;
}