#include <iostream>
#include <vector>
#include <string>

using namespace std;

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

        string res;
        res.append(length, character);
        
        list.push_back(res);
    }
    // Output the list
    for (string i : list)
        cout << i << endl;
    
    return 0;
}