#include <iostream>
#include <cstdio>

int main() {
    int a, b;
    scanf("%d\n%d", &a, &b);

    std::string words[] = { "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" }; 

    for (int n = a; n <= b; ++n)
    {   
        bool isDivisible = (n % 2==0);
        if ((n >= 1) && (n <= 9)) std::cout << words[n-1] << std::endl;
        else if ((n > 9) && isDivisible) std::cout << "even" << std::endl;
        else if ((n > 9) && !isDivisible) std::cout << "odd" << std::endl;
    }
    return 0;
}
