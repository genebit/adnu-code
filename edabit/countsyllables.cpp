#include <iostream>

int numberSyllables(std::string word)
{
    int count = 0;

    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == '-')
            count++;
    }
    return count + 1;
}

int main()
{
    std::cout << numberSyllables("buf-fet") << std::endl;
    return 0;
}