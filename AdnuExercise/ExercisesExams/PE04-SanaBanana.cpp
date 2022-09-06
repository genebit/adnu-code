#include <iostream>

int total_cost(int cost, int money, int num_of_bananas)
{
    if (num_of_bananas == 0)
        return num_of_bananas;
        
    return total_cost(cost, money, num_of_bananas-1) + cost * num_of_bananas;
}

int main()
{
    int cost, money, num_of_bananas;
    
    while (std::cin >> cost >> money >> num_of_bananas)
    {
        int total = total_cost(cost, money, num_of_bananas);
        if (money - total < 0)
            std::cout << abs(money - total) << std::endl;
        else
            std::cout << 0 << std::endl;
    }
    
    return 0;
}