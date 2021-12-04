#include <iostream>

// Write a function that converts hours into seconds.
int howManySeconds(int hour)
{
    int second = 60;
    int minute = 60;
    return second * minute * hour;
}

// NOTE:
// 60 seconds in a minute, 60 minutes in an hour
// Don't forget to return your answer.

int main()
{
    std::cout << howManySeconds(2) << std::endl;
    return 0;
}