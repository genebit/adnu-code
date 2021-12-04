#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool changeEnough(vector<float> change, float amountDue) {
    float totalChange = 0;

    float convertion[4] = { 0.25, 0.10, 0.05, 0.01 };

    for (int i = 0; i < change.size(); ++i) {
        change[i] *= convertion[i];
        totalChange += change[i];
    }
    return (totalChange >= amountDue) ? true : false;
}

int main() {
    vector<int> change;
    for (int i = 0; i < 4; i++) {
        int num;
        cin >> num;  
        change.push_back(num);
    } 
    int amountDue;
    cin >> amountDue;

    cout << changeEnough(change, amountDue);
    return 0;
}