#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> sum_odd_even(vector<int> arr) {
    vector<int> results;
    int sum_even = 0, sum_odd = 0;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0)    sum_even += arr[i];
        else                    sum_odd += arr[i];   
    }
    results.push_back(sum_even);
    results.push_back(sum_odd);

    return results;
}

int main() {
    init();
    
    vector<int> arr = { 0, 0 };
    for (int i : sum_odd_even(arr)) 
        cout << i << " ";
    cout << endl;
    return 0;
}