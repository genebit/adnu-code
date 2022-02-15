#include <iostream>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();

    int size, target;
    cin >> size >> target;
    // Store input
    int arr[size];
    for (int i = 0; i < size; i++) cin >> arr[i];

    // Process
    int position;
    bool isFound;
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            position = i;
            isFound = true;
            break;
        }
    }
    // Output
    (isFound) 
        ? cout << "Found at position " << position << " in " << position+1 << " steps!\n" 
        : cout << "Not Found!";

    //----------2nd Solution----------//
    // int position;
    // bool isFound;
    // for (int i = 0; i < size; ++i) {
    //     if (arr[i] == target) {
    //         cout << "Found at position " << i << " in " << i+1 << " steps!\n"; 
    //         break;
    //     }
    //     if (i == arr[size-1] && arr[i] != arr[size-1])
    //         cout << "Not Found!" << endl;
    // }
    return 0;
}