#include <iostream>
using namespace std;

int main()
{
    // Fibonacci Sequence
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...

    const int size = 20;
    int fibonacci_sequence[size];

    int first_term = 0;
    int second_term = 1;

    for (int i = 0; i < size; i++)
    {
        int next_term = first_term + second_term;
        first_term = second_term;
        second_term = next_term;

        cout << fibonacci_sequence[i] << endl;
    }
    return 0;
}