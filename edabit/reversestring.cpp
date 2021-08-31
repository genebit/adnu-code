#include <iostream>
#include <vector>
#include <string>

std::string reverse(std::string& text)
{
    std::string reversed_text[];

    for (int i = 0 : *text)
        reversed_text[i] = *text[i];

    for (int i = *text.size(); i >= 0; i--)
    {
        reversed_text[i] = *text[i];
    }
    return reversed_text;
}

int main()
{
    std::cout << reverse("hello") << std::endl;
    return 0;
}