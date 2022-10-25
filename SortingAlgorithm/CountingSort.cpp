#include <iostream>

void init() 
{
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

void countingSort(int arr[], int size)
{

}

int main()
{
    init();

    int size;
    std::cin >> size;

    int arr[size];
    for (int i = 0; i < size; i++)
        std::cin >> arr[i];

    countingSort(arr, size);

    for (int i : arr)
    {
        std::cout << i << " ";
    }

    return 0;
}