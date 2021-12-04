#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
Create a function that takes the month and year (as integers) 
and returns the number of days in that month.
EXAMPLE:
    days(2, 2018) ➞ 28
    days(4, 654) ➞ 30
    days(2, 200) ➞ 28
    days(2, 1000) ➞ 28
*/

int days(int month, int year) {
    //for February
    if (month == 2) {
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))  // If the year is leapyear
            return 29;
        else
            return 28;
    }
    //for months which has 31 days
    else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        return 31;
    else
        return 30;
}

int main() {
    cout << days(3, 2002);
    return 0;
}