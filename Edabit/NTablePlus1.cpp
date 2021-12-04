#include <iostream>

// Create a function that takes a number n 
// and returns the first 10 multiples of n with 1 added to it, separated by commas.

// SAMPLE OUTPUT
//      nTablesPlusOne(7) ➞ "8,15,22,29,36,43,50,57,64,71"
//      nTablesPlusOne(1) ➞ "2,3,4,5,6,7,8,9,10,11"
//      nTablesPlusOne(3) ➞ "4,7,10,13,16,19,22,25,28,31"

std::string nTablesPlusOne(int n) {
    int num = 0;
    int counter = 0;

    std::string res;

    do {
        num++;
        if (num % n == 0) {
            counter++;
            res.append(std::to_string(num + 1) + ',');
        }
    }
    while (counter < 10);

    res.pop_back();
    return res;
}

int main() {
    std::cout << nTablesPlusOne(3) << std::endl;
}