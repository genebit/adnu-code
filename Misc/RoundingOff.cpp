#include <iostream>
#include <cmath>

using namespace std;

void roundoff(float& num, int nth) {
    num = round(num * pow(10, nth)) / pow(10, nth);
}

int main() {
    float num = 3.5555;
    roundoff(num, 3);

    cout << num;
    return 0;
}