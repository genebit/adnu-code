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

/*
Alternative Solution:
	string longBurp(int num) {
		string res = "Bu";
			return res.append(num, 'r') + "p";
	}
*/

int main()
{
    // Create a function that returns the string "Burp" 
    // with the amount of "r's" determined by the input 
    // parameters of the function.
    // Example:
    //      longBurp(3) ➞ "Burrrp"
    //      longBurp(5) ➞ "Burrrrrp"
    //      longBurp(9) ➞ "Burrrrrrrrrp"

    cout << longBurp(2) << endl;
    return 0;
}
