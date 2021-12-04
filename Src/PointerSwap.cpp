#include <iostream>
using namespace std;

void swapNum(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;

    cout << "\nNew Number:\n";
    cout << *a << "\n" << *b;
}

int main() {

    int num1 = 10;
    int num2 = 5;

    int* p_num1 = &num1;
    int* p_num2 = &num2;

    cout << "Before:\n";
    cout << *p_num1 << "\n"
        << *p_num2;
    swapNum(p_num1, p_num2);

    return 0;
}