#include <iostream>
#include <vector>

using namespace std;

// Compare each vector and output it to true or false
bool checkEquals(std::vector<int> arr1, std::vector<int> arr2)
{
    bool result = std::equal(arr1.begin(), arr.end(), arr2.begin());

    for (int i = 0; i < arr1.size(); i++)
        if (result)
            return true;
        else
            return false;
}

int main()
{   
    std::vector<int> a = { 4, 5, 6 };
    std::vector<int> b = { 4, 5, 1 };
    std::cout << checkEquals(a, b) << std::endl;

    return 0;
}