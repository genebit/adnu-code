#include <algorithm>
#include <iostream>
#include <vector>

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}


void bucketSort(float arr[], int size) {
    // 1) Create n empty buckets
    std::vector<float> bucket[size];

    // 2) Put array elements 
    // in different buckets
    for (int i = 0; i < size; i++) {
        // Index in bucket
        // Note: this is rounded off
        int bi = size * arr[i];
        bucket[bi].push_back(arr[i]);
    }

    // 3) Sort individual buckets
    for (int i = 0; i < size; i++)
        sort(bucket[i].begin(), bucket[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < bucket[i].size(); j++) {
            // overrides the elements by the buckets array
            arr[index] = bucket[i][j];
            index++;
        }
    }
}

void bucketSort(int arr[], int size) {
    int max = *std::max_element(arr, arr + size);
    int min = *std::min_element(arr, arr + size);
    int range = (max - min) / size;

    std::vector<std::vector<int>> buckets;

    for (int i = 0; i < max; i += range) {
        std::vector<int> temp;
        buckets.push_back(temp);
    }

    for (int i = 0; i < size; ++i) {
        int bucketIndex = (arr[i] - min) / range;
        buckets[bucketIndex].push_back(arr[i]);
    }

    // 3) Sort individual buckets
    for (int i = 0; i < size; i++)
        sort(buckets[i].begin(), buckets[i].end());

    // 4) Concatenate all buckets into arr[]
    int index = 0;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < buckets[i].size(); j++) {
            // overrides the elements by the buckets array
            arr[index] = buckets[i][j];
            index++;
        }
    }
}

int main() {
    init();

    // float arr[] = { 0.45, 0.55, 0.12, 0.15, 0.35 };
    int arr[] = { 20, 15, 35, 19, 40, 10, 7, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    bucketSort(arr, n);

    for (int i = 0; i < n; i++)
        std::cout << arr[i] << std::endl;

    return 0;
}
