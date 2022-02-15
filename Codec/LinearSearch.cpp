#include <iostream>

using namespace std;

int main() {
    // Binary Search
    vector<int> arr;
    int num;
    while (cin >> num) { arr.push_back(num); }
    sort(arr.begin(), arr.end());

    // Output Sorted list
    cout << "Sorted: ";
    for (int num : arr) cout << num << " ";

    // Value to be searched throughout the array
    int searchedValue = 10;
    
    // Binary Search
    int upper = arr.size()-1,
        low = 0,
        middle = (low + upper) / 2;

    while (arr[middle] != searchedValue) {
        middle = (low + upper) / 2;
        if (arr[middle] < searchedValue) low = middle+1;
        else                             upper = middle-1;
        if (arr[middle] == searchedValue) {
            // Output
            cout << "\nFound! at position: " << middle << endl;
            break;
        }
    }

    return 0;
}