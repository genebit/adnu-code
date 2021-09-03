#include <iostream>

int triArea(int base, int height)
{
    return (base * height) / 2;
}

int main()
{
    int base;
    int height;
    std::cin >> base >> height;
    
    int result = triArea(base, height);

    std::cout << "The are of a triangle is: " << result << std::endl;
    return 0;
}