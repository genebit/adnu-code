#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

/*
Create a function that takes a string as input and capitalizes a letter if its 
ASCII code is even and returns its lower case version if its ASCII code is odd.
EXAMPLE:
    ascii_capitalize("to be or not to be!") ➞ "To Be oR NoT To Be!"
    ascii_capitalize("THE LITTLE MERMAID") ➞ "THe LiTTLe meRmaiD"
    ascii_capitalize("Oh what a beautiful morning.") ➞ "oH wHaT a BeauTiFuL moRNiNg."
*/

string asciiCap(string str) {
    string res;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] % 2 == 0 && str[i] >= 'a' && str[i] <= 'z') // Uppercase
            str[i] -= 32;
        
        if (str[i] % 2 != 0 && str[i] >= 'A' && str[i] <= 'Z') // Lowercase 
            str[i] += 32;
        
        res.push_back(str[i]);
    }
    return res;
}

int main() {
    string str;
    getline(cin, str);

    cout << asciiCap(str) << endl;

    return 0;
}