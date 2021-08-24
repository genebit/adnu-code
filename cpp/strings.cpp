#include <iostream>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;

    printf("%d %d\n", a.size(), b.size());

    cout << a.size() << " " << b.size() << endl;
    cout << (a + b) << endl;

    char a_temp = b[0];
    char b_temp = a[0];

    a[0] = a_temp;
    b[0] = b_temp;

    cout << a << " " << b;
    return 0;
}