#include <iostream>
#include <string>
#include <vector>

using namespace std;

int get_missing_num(vector<int> arr, int n)
{
    int result = (n + 1) * (n + 2) / 2;
    for (int i = 0; i < n; i++) {
        result -= arr[i];
    }
    return result;
}

int main()
{
    vector<int> arr;
    int num;
    while (cin >> num) {
        arr.push_back(num);
    }

    int missing_num = get_missing_num(arr, arr.size());
    cout << missing_num;
}