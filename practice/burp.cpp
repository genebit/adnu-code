#include <iostream>

using namespace std;

string longBurp(int len)
{
    string burp = "Bur";
    char r = 'r'; 

    if (len != 0)
        for (int i = 1; i < len; i++)
            burp += r;
            
    return burp + 'p';
}

int main()
{
    cout << longBurp(2) << endl;
    return 0;
}