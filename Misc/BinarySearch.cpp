#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int size, target;
    cin >> size >> target;

    int arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];

    int low = 0,
        high = size -1,
        middle = (low + high) / 2;

    int position = -1;
    bool isFound = false;
    int i = 0;
    while (!isFound && i < size) {
        middle = (low + high) / 2;
        if (arr[middle] == target) {
            position = middle;
            isFound = true;
        }
        (arr[middle] > target) ? high = middle -1 : low = middle +1;
        i++; // This keeps this loop from infinitely looping
    }

    if (position != -1) {
        cout << "Found at position: " << position+1 << endl;
    }
    else {
        cout << "Not Found!\n";
    }
    return 0;
}