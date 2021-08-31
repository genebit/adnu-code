#include <iostream>

bool simonSays(int a[], int b[])
{
    if (b[1] == a[0])
        return true;
    return false;
}

int main()
{
    int a[] = { 1, 2, 3, 4, 5 };
    int b[] = { 5, 5, 1, 2, 3 };
    
    if (simonSays(a, b))
        std::cout << "true" << std::endl;
    else
        std::cout << "false" << std::endl;

    return 0;
}