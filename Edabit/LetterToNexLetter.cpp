#include <iostream>

// Write a function that changes every letter to the next letter:
//     "a" becomes "b"
//     "b" becomes "c"
//     "d" becomes "e"

std::string move(std::string word) {
    std::string res;
    for (char i : word) {
        char j = int(i) + 1;
        res += j;
    }
    return res;
}

int main() {
    std::cout << move("Hello") << std::endl;
    return 0;
}