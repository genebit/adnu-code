#include <iostream>
#include <string>

float add(int a, int b) { return float(a) + b; }
float subtract(int a, int b) { return float(a) - b; }
float multiply(int a, int b) { return float(a) * b; }
float divide(int a, int b) { return float(a) / b; }

int main()
{
    std::cout << "Enter a Number:\n> ";
    int num1;
    std::cin >> num1;

    std::cout << "Enter a Number:\n> ";
    int num2;
    std::cin >> num2;

    std::cout << "Operation: (Add, Subtract, Multiply, Divide)\n> ";
    std::string operation;
    std::cin >> operation;

    float result;

    if (operation == "add") { result = add(num1, num2); }
    if (operation == "subtract") { result = subtract(num1, num2); }
    if (operation == "multiply") { result = multiply(num1, num2); }
    if (operation == "divide") { result = divide(num1, num2); }

    std::cout << "Result\n> " << result << std::endl;
    
    return 0;
}