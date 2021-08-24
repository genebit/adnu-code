#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int size;
    cin >> size;

    vector<int> arr;
    int temp[size];

    for (int i = 0; i < size; i++)
    {
        cin >> temp[i];

        arr.push_back(temp[i]);
    }
    sort(arr.begin(), arr.end());

    for (int item : arr)
    {
        cout << item << " ";
    }
    return 0;
}