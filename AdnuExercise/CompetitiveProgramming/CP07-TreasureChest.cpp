#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    // PROBLEM: TREASURE CHEST
    int size;
    cin >> size;

    for (int i = 0; i < size; ++i) {
        int list_size, num;
        cin >> list_size;
        vector<int> arr = {};
        for (int i = 0; i < list_size; ++i) {
            cin >> num;
            arr.push_back(num);
        }
        sort(arr.begin(), arr.end());
        cout << arr[arr.size()-2] + arr[arr.size()-1] << endl;
    }
    return 0;
}