#include <iostream>
#include <cstdio>
#include <vector>

using namespace std;

int max_of_four(int a, int b, int c, int d)
{
    vector<int> list = {a, b, c, d};
    int answer;

    for (int i = 0; i < list.size(); ++i)
    {
        int temp = list[i];
    }
    return answer;
}

int main()
{
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}