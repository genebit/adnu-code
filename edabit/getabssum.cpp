#include <iostream>

int getAbsSum(std::vector<int> arr) {
    
    int sum = 0;
    
    for (int i : arr)
    {
        if (i < 0)
            i *= -1;
        sum += i;
    }
    return sum;
}

int main()
{
    int arr = {};
    std::cout << getAbsSum(arr) << std::endl;
    return 0;
}