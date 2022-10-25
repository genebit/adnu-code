#include <iostream>

void init() 
{
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

bool checkIfSorted(int arr[], int size)
{
    for (int i = 0; i < size - 1; ++i)
        if (arr[i] > arr[i + 1])
            return false;
    return true;
}

void cocktailSort(int arr[], int size)
{
    int start_front = 0;
    int start_end = size - 1;

    bool is_arr_sorted = checkIfSorted(arr, size);
    while (!is_arr_sorted)
    {
        // forward traverse
        for (int i = start_front; i < start_end; ++i)
        {
            int next = i + 1;
            if (arr[i] > arr[next])
                std::swap(arr[i], arr[next]);
        }

        // backwards traverse
        for (int i = start_end; i > start_front; --i)
        {
            int prev = i - 1;
            if (arr[prev] > arr[i])
                std::swap(arr[prev], arr[i]);
        }

        // check if the array is sorted, otherwise keep sorting
        int arr_already_sorted = checkIfSorted(arr, size);
        if (arr_already_sorted)
        {
            is_arr_sorted = true;
        }
        else
        {
            start_front++;
            start_end--;
        }
    }
}

int main()
{
    init();

    int size;
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    cocktailSort(arr, size);

    for (int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}