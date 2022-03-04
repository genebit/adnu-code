#include <iostream>

using namespace std;

double myPower(double base, int exponent) {
    double res = 1;
    for (int i = 0; i < exponent * ((exponent > 0) - (exponent < 0)); i++) 
        res *= base;
    if (exponent < 0) return 1/res;
    else              return res;
}

int main() {
    double x;
    int y;
    while (cin >> x >> y) 
        cout << myPower(x, y) << endl;
    return 0;
}
