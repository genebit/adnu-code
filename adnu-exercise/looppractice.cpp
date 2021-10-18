#include <iostream>
#include <vector>
#include <string>

using namespace std;

string repeatChar(int num, char character)
{
    string res;
    res.push_back(character);

    for (int i = 1; i < num; i++)
    {
        res.push_back(character);
    }
    return res;
}

int main() 
{
    int size;
    cin >> size;

    int length;
    char character;

    vector<string> list;

    for (int i = 0; i < size; i++)
    {
        cin >> length >> character;
        list.push_back(repeatChar(length, character));
    }
    // Output the list
    for (string i : list)
        cout << i << endl;
    
    return 0;
}