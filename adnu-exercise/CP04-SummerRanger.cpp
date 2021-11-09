#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

/*
Wanda wants to know the sum of all the numbers given a range of values. 
Help her automate this task.

SAMPLE INPUT:
    1 10
SAMPLE OUTPUT:
    55
EXPLANATION: 1 + 2 + 3 + 4 + 5 ... + 10 = 55

SAMPLE INPUT 1:
    9 2
SAMPLE OUTPUT 1:
    44
EXPLANATION: 2 + 3 + 4 + 5 ... + 9 = 44
*/
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int min, max;
    if (a < b) { min = a; max = b; }
    if (b < a) { min = b; max = a; }

    int res = 0;
    for (int i = min; i <= max; i++)
        res += i;
    cout << res;
    return 0;
}