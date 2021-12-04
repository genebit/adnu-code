#include <iostream>

int main() {
    std::cout << "Size of the sequence:\n> ";

    int size;
    std::cin >> size;

    std::cout << "Number to start:\n> ";

    int startNum;
    std::cin >> startNum;

    std::cout << "Common Difference:\n> ";
    int leap;
    std::cin >> leap;

    int sequence[size];

    for (int i = startNum; i < size; i += leap) {
        sequence[i] = i;
        std::cout << sequence[i] << ' ';
    }
    std::cout << std::endl;

    return 0;
}