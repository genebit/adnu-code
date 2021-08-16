#include <iostream>
#include <vector>

using namespace std;

int simpleArraySum(vector<int> arr)
{
    int ans = 0;

    for (int i = 0; i < arr.size(); ++i)
    {
        ans += arr[i];          
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 10, 11};
    
    int answer = simpleArraySum(arr);
    cout << answer;
    return 0;
}