#include <iostream>
#include <vector>

// Create a function that takes two numbers as arguments (num, length) and
// returns an array of multiples of num until the array length reaches length.

// SAMPLE OUTPUT:
//      arrayOfMultiples(7, 5) ➞ [7, 14, 21, 28, 35]
//      arrayOfMultiples(12, 10) ➞ [12, 24, 36, 48, 60, 72, 84, 96, 108, 120]
//      arrayOfMultiples(17, 6) ➞ [17, 34, 51, 68, 85, 102]

std::vector<int> arrayOfMultiples(int num, int length) 
{
    std::vector<int> res;
    
    int i = 0;
    do 
    {
        i++;
        if (i % num == 0)
            res.push_back(i);
    } while (res.size() < length);

    return res;    
}

int main()
{   
    for (int i : arrayOfMultiples(7, 3))
        std::cout << i << ' ';
    return 0;
}