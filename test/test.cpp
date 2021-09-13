#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{   
    // Code Here
    int itemToFind = 10;

    int arr[20];
    for (int i = 0; i <= 20; i++)
    {
        arr[i] = i;
        if (arr[i] == itemToFind)
        {
            cout << "Item Found at index: " << arr[i] << endl;
            break;
        }
    } 
    cout << "Finished" << endl;
    
    return 0;
}