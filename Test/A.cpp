#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sort(int start, vector<int> &arr) 
{
    // 1. get the lowest element in the list
    // 2. swap the first with the lowest element on the list
    // 3. get the lowest element in the list from the position of last lowest elem on list

    int lowest_in_list = arr[start];
    int position = start;
    for (int i = start; i < arr.size(); ++i)
    {
        if (arr[i] < lowest_in_list)
        {
            lowest_in_list = arr[i];
            position = i;
        }
    }
    swap(arr[start], arr[position]);
}

int main() {
    init();
    
    vector<int> arr = { 1, 2, 3, 4, 5, 6, 7, 8 };
    
    for (int i = 0; i < arr.size(); ++i)
    {   
        sort(i, arr);
        cout << arr[i] << " ";
    }

    return 0;
}