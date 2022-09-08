#include <iostream>

bool wordExist(std::string a, std::string b)
{
    for (int i = 0; i < b.size(); i++) {
        if (b[i] == a[0])
            if (b.substr(i, a.size()) == a)
                return true;
    }
    return false;
}

int main() 
{
    int size;
    std::cin >> size;
    
    for (int i = 0; i < size; i++)
    {
        std::string a, b;
        std::cin >> a >> b;
        
        if (wordExist(a, b))
            std::cout << "YES" << std::endl;
        else
            std::cout << "NO" << std::endl;
    }
    return 0;
}