#include <iostream>

void fizzBuzz(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 != 0)       std::cout << "Fizz\n";
        else if (i % 5 == 0 && i % 3 != 0)  std::cout << "Buzz\n";
        else if (i % 3 == 0 && i % 5 == 0)  std::cout << "FizzBuzz\n";
        else                                std::cout << i << std::endl;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    std::cin >> n;

    std::cout << std::endl;
    fizzBuzz(n);
}