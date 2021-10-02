#include <iostream>
#include <iomanip>
#include <vector>

void makeBox(int n) {

    std::vector<std::string> box;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (n > 4) {
                if (i == 1 || j == n-1) {
                    
                }
            }
            box.push_back("#");        
            std::cout << box[i];
        }
        std::cout << std::endl;
    }
}

int main() {
    makeBox(5);
    return 0;
}