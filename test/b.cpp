#include <iostream>
#include <vector>

// std::vector<std::vector<int>> squarePatch(int n) {
//     for (int i = 0; i < n; ++i) {
//         for (int j = 0; j < n; ++j) {
//             std::cout << j << ' ';
//         }
//         std::cout << std::endl;
//     }
// }

int main() {
    std::string str;

    for (int i = str.size(); i >= 0; i--) {
        str = str[i];
    }
    std::cout << str << std::endl;
    return 0;
}