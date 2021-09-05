#include <iostream>
#include <sstream>

bool isBoiling(std::string temp)
{
    std::stringstream ss(temp);
    int temperature;
    char unit;
    ss >> temperature >> unit;

    if (unit == 'F')
        if (temperature >= 212)
            return true;
    if (unit == 'C')
        if (temperature >= 100)
            return true;
    return false;
}

int main()
{
    std::string temp = "212F";

    std::cout << isBoiling(temp) << std::endl;
    return 0;
}