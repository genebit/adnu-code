#include <iostream>
using namespace std;

bool isDivisible(int num) { return num%2==0; }

int main() {
    int num;
    cin >> num;

    // 1 is True
    // 0 is False
    if (isDivisible(num)) cout << "It's Divisible";
    else cout << "It's Not Divisible";

    return 0;
}