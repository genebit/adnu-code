#include <algorithm> 
#include<iostream>
#include<string>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();

    int divided_by, number;
    
    const int HEX[16] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 'A', 'B', 'C', 'D', 'E', 'F' };

    while (cin >> number >> divided_by) {
        string s;
        while (number > 0) {
            int remainder = number % divided_by;
            
            if (divided_by == 16) {
                if (remainder > 9)
                    s += (char)HEX[remainder];
                else
                    s += to_string(HEX[remainder]);
            }
            else {
                s += to_string(remainder);
            }
            
            number /= divided_by;
        }
        reverse(s.begin(), s.end());
        cout << s << endl;
    }
    return 0;
}