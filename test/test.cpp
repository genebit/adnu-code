#include <iostream>
#include <cstring>

int main()
{
    std::string name = "genebitara";
    const char* n = name.c_str();

    std::cout << n << std::endl;
    return 0;
}