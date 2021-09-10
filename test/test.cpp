#include <iostream>
#include <vector>
#include <string>

void move(std::string* word)
{
    std::cout << *word << std::endl;
    *word = "spaghetti";
}

int main()
{   
    // Code Here
    std::string a = "carbonara";
    move(&a);

    std::cout << a << std::endl;

    return 0;
}