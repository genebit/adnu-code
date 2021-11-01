#include <iostream>

bool isSafeBridge(std::string bridge)
{
    for (char i : bridge)
        if (i == ' ')
            return false;
    return true;
}