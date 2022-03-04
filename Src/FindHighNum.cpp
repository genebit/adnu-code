#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    char vowels[] = { 'a', 'e', 'i', 'o', 'u' };
    int arr[] = { 40, 5, 12, 10, 0 };

    int high_num = arr[0], found_at = 0;
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            if (high_num < arr[j]) {
                high_num = arr[j];
                found_at = j;
            }
        }
    }
    cout << high_num << " At index: " + to_string(found_at) << endl;
    return 0;
}