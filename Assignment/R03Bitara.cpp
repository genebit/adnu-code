#include <iostream>

using namespace std;

int main() {
    int main_size;
    cin >> main_size;

    for (int i = 0; i < main_size; i++) {
        int size;
        cin >> size;

        int arr[size];
        for (int j = 0; j < size; j++)
            cin >> arr[j];

        // Find the high and low
        int low = arr[0];
        int high = arr[0];
        for (int k = 0; k < size; k++) {
            for (int l = 0; l < size; l++) {
                if (low >= arr[l])  low = arr[l];
                if (high <= arr[l]) high = arr[l];
            }
        }

        // Output
        cout << low << " " << high << " " << (low + high) << endl;
    }
    return 0;
}