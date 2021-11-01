#include <iostream>
#include <vector>

std::vector<int> noOdd(std::vector<int> list)
{
    std::vector<int> listOfEvenNum;

    for (int i : list)
        if (i % 2 == 0)
            listOfEvenNum.push_back(i);
        else
            continue;

    return listOfEvenNum;
}