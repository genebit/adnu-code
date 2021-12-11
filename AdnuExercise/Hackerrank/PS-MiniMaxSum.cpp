#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void miniMaxSum(vector<int> arr) {
    sort(arr.begin(), arr.end());
    
    long int min = 0, max = 0;
    for (int i = 0; i < arr.size()-1; ++i) { // Finding min
        min = min + arr[i];
    }
    for (int i = 1; i < arr.size(); ++i) { // Finding max
        max = max + arr[i];
    }
    cout << min << " " << max << endl;
}

int main() {
    const int SIZE = 5;
    int num;
    vector<int> arr;

    for (int i = 0; i < SIZE; ++i) {
        cin >> num;
        arr.push_back(num);
    }

    miniMaxSum(arr);

    return 0;
}