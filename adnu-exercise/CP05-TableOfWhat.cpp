#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

/*
Your program must output the multiplication table of that number from 1 to 10. See sample program output.
For cases beyond the contraints, output "Unable to Process"
SAMPLE INPUT: 5
SAMPLE OUTPUT:
    5 * 1 = 5
    5 * 2 = 10
    5 * 3 = 15
    5 * 4 = 20
    5 * 5 = 25
    5 * 6 = 30
    5 * 7 = 35
    5 * 8 = 40
    5 * 9 = 45
    5 * 10 = 50
*/
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n > 0 && n < 10)
        for (int i = 1; i <= 10; i++)
            cout << n << " * " << i << " = " << (n * i) << endl;
    else
        cout << "Unable to Process" << endl;
    return 0;
}