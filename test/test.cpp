#include <iostream>
#include <cstring>

int main()
{
    std::string name = "add";
    const char* n = name.c_str();

    switch (convert(n))
    {
    case "add": 
        std::cout << "Add\n";
        break;
    
    case "minus": 
        std::cout << "Minus\n";
        break;
    }
    return 0;
}