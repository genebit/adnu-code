#include <iostream>

// NOTE(GENE): Don't include this in git anymore

std::string uncensor(std::string str, std::string vowels) {

    std::string res = str;
    int j = 0;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '*') {
            j++;
            res[i] + vowels[j];
            std::cout << res[i] << std::endl;
        }
    }
    return res;
}

int main()
{   
    // std::cout << uncensor("Wh*r* d*d my v*w*ls g*?", "eeioeo") << std::endl;
    return 0;
}