#include <iostream>
#include <cstdio>
#include <iomanip>
#include <string>
#include <bits/stdc++.h>

/*
Lou is playing a game of hopscotch (piko in Filipino). 
He got a bit curious and created an imaginary linear hopscotch course. 
While he is standing at the beginning of the course, 
he asked, "How many hops would it take for me to reach or go beyond a 
particular square given a uniform number of skips I do?". 

Help Lou automate this task.
------------------------------------------------------------------
SAMPLE INPUT 0:
    2
    10 10
    10 5
SAMPLE OUTPUT 0:
    1
    2
EXPLANATION: For the first pair, it would only take 1 hop to reach the square number 10 
    given that Lou can skip 10 squares at a time. For the second, it would take 2.
------------------------------------------------------------------
SAMPLE INPUT 1:
    1
    10 3
SAMPLE OUTPUT 1:
    4
EXPLANATION: Lou needs to hop 4 times in order to reach square # 10 while skipping 3 squares at a time.
*/
using namespace std;

int main() {
    init();

    int n, r, s;
    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> r >> s;
        if (r%s==0) cout << r/s << endl;
        if (r%s!=0) cout << r/s+1 << endl;
    }
    return 0;
}