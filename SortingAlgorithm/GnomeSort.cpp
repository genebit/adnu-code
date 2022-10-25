#include <iostream>

void init() 
{
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

void gnomeSort(int arr[], int size)
{
    int position = 0;
    while (position < size)
    {
        if (position == 0 || arr[position] >= arr[position - 1])
        {
            position++;
        }
        if (arr[position] < arr[position - 1])
        {
            std::swap(arr[position], arr[position - 1]);
            position--;
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

    gnomeSort(arr, size);

    for (int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}