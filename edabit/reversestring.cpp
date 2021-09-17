#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

std::string reverse(std::string str)
{
    std::string reversed_string;
    for (int i = str.length()-1; i >= 0; i--)
        reversed_string = reversed_string + str[i];
    return reversed_string;
}

// SOLUTION 2
// std::string reverse(std::string str) {
// 	std::vector<char> arr;
// 	for (char i : str)
// 		arr.push_back(i);
// 	std::reverse(arr.begin(), arr.end());

//     std::string reversedString(arr.begin(), arr.end());
// 	return reversedString;
// }

int main()
{
    std::cout << reverse("hello") << std::endl;
    return 0;
}