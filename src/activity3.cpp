#include <iostream>

int main()
{
    int list[] = { 10, 11, 12, 15, 40, 3, 7 };
    int sum = 0;

    for (int i : list)
        if (i % 3 == 0)
            sum += i;
        else
            continue;

    std::cout << "Answer: " << sum << std::endl;

    return 0;
}