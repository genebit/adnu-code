#include <iostream>

using namespace std;

float add(int& a, int& b) { return float(a) + b; } 
float subtract(int& a, int& b) { return float(a) - b; } 
float multiply(int& a, int& b) { return float(a) * b; } 
float divide(int& a, int& b) { return float(a) / b; } 

int main()
{
    int num1 = 20;
    int num2 = 30;

    cout << subtract(num1, num2);
    return 0;
}