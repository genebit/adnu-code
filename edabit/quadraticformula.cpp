#include <iostream>
#include <cmath>

// Create a function to find only the root value of x in any quadratic equation ax^2 + bx + c. 
// The function will take three arguments:
//      a as the coefficient of x^2
//      b as the coefficient of x
//      c as the constant term

int quadraticEquation(int a, int b, int c) 
{
    // numerator:= -b + squareroot of (b * b - 4 * (a) * (c)
    // denominator:= 2 * (a)
    // formula: x = numerator/denominator

    int x = 0;
    int numerator = -b + sqrt(b * b - 4 * (a) * (c));
    int denominator = 2 * (a);
    x = numerator/denominator;
    return x;
}