#include <iostream>

int binary_search(int arr[], int size, int target) 
{
    int lower_bound = 0;
    int upper_bound = size - 1;
    int mid_point = (lower_bound + upper_bound) / 2;
    
    while (arr[mid_point] != target) 
    {
        if (upper_bound < lower_bound)
            break;
            
        std::cout << arr[lower_bound] << " " << arr[upper_bound] << " "; 
        
        mid_point = lower_bound + (upper_bound - lower_bound) / 2;
        
        if (arr[mid_point] < target)
            lower_bound = mid_point + 1;            
            
        if (arr[mid_point] > target)
            upper_bound = mid_point - 1;
        
        std::cout << arr[mid_point] << std::endl;
        
        if (arr[mid_point] == target)
            return mid_point;
    }
    
    return -1;    
}

int main() 
{
    int size = 100, target;
    int arr[size];
    for (int i = 0; i < size; i++) 
    {
        std::cin >> arr[i];
    }
    
    std::cin >> target;
    
    int res = binary_search(arr, size, target);
    
    if (res != -1) 
    {
        std::cout << target << " found at index " << res;
    }
    else 
    {
        std::cout << target << " not found";
    }
    return 0;
}