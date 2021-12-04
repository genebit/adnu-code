#include <iostream>
#include <iomanip>

// INPUT: 7
// SAMPLE OUTPUT
//  1  2  3  4  5  6  7 
//  2  4  6  8 10 12 14 
//  3  6  9 12 15 18 21 
//  4  8 12 16 20 24 28 
//  5 10 15 20 25 30 35 
//  6 12 18 24 30 36 42 
//  7 14 21 28 35 42 49 
 
int main() {
    int size;
    std::cin >> size;

    for (int i = 1; i <= size; i++) {
        for (int j = 1; j <= size; j++) {
            std::cout << std::setfill(' ') << std::setw(2);
            std::cout << i * j << " ";
        }
        std::cout << std::endl;
    }
    return 0;
}