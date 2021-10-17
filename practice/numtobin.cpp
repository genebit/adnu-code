#include <iostream>
#include <vector>

using namespace std;

void display_output(vector<int> arr) 
{
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i];
}

int main()
{   
    int decimal;
    cin >> decimal;
    
    vector<int> reversed_binary;   
    vector<int> binary;

    while (decimal > 0) 
    {
        reversed_binary.push_back(decimal % 2 == 1);
        decimal /= 2;
    }
    for (int i = reversed_binary.size()-1; i >= 0; i--)
        binary.push_back(reversed_binary[i]);

    display_output(binary);
    
    cout << endl;

    return 0;
}