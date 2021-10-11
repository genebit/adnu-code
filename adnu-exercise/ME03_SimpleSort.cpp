#include <iostream>

int main() {

    int unsorted_arr[3] = { 5, 16, -27 };

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3-i; ++j)
        {
            // if (unsorted_arr[i] > unsorted_arr[j])
            std::cout << unsorted_arr[i] << ' ' << unsorted_arr[j+1];
        }
    }

    return 0;
}