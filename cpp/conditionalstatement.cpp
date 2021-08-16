#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    scanf("%d\n%d", &a, &b);

    string words[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int n = a; n <= b; ++n)
    {
        bool isDivisible = (n % 2 == 0);
        if ((n >= 1) && (n <= 9))
            cout << words[n - 1] << endl;
        else if ((n > 9) && isDivisible)
            cout << "even" << endl;
        else if ((n > 9) && !isDivisible)
            cout << "odd" << endl;
    }
    return 0;
}
