#include <iostream>
#include <vector>

int get_target_position(std::string &list, char target) {
    for (int i = 0; i < list.size(); ++i)
        if (list[i] == target) 
            return i;
    return -1;
}

void reverse(std::string &list)  {
    std::string res;
    for (int i = list.size() - 1; i >= 0; --i)
        res += list[i];
    list = res;
}

int main() {
    int test_cases;
    std::cin >> test_cases;

    for (int k = 0; k < test_cases; ++k) {
        char target;
        std::string gifts;
        std::cin >> target >> gifts;

        reverse(gifts);

        int positionFound = get_target_position(gifts, target);

        if (positionFound != -1) {
            // print from the end till the position found
            for (int i = gifts.size() - 1; i > positionFound; --i)
                std::cout << gifts[i];

            if (positionFound != 0 && positionFound != gifts.size() - 1)
                std::cout << " ";

            // print from the start till the position found (the stack which the grinch moved)
            for (int i = 0; i < positionFound; ++i)
                std::cout << gifts[i];
        }
        else {
            std::cout << gifts;
        }

        std::cout << std::endl;
    }


    return 0;
}