#include <iostream>
#include <vector>

int countTrue(std::vector<bool>& arr)
{
    int count = 0;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i] == 1)
            count++;

    return count;
}

int main()
{
    std::vector<bool>arr = { true, true, true, true, false };
    std::cout << countTrue(arr) << std::endl;
    return 0;
}