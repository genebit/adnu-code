#include <sstream>
#include <vector>
#include <iostream>

using namespace std;

vector<int> parseInts(string str)
{
    stringstream ss(str);
    vector<int> arr;
    // Handlers for the datatypes that will show in the str
    char ch;
    int temp;

    // While the stringstream object does not hit a null byte
    while (ss)
    {
        /* 
         *  Extract the comma seperated ints with the extraction >> operator
         *  Operator >> EXTRACTS formatted data.
         *  Operator << INSERTS formatted data.
        */
        ss >> temp >> ch;
        arr.push_back(temp);
    }

    return arr;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}