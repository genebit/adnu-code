#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    sort(candles.begin(), candles.end());

    int tallest_candle = candles[candles.size()-1];
    int counter = 0;
    for (int i = candles.size()-1; i >= 0; --i) {
        if (candles[i] == tallest_candle) ++counter;
    }
    return counter;
}

int main() {
    int size, num;
    cin >> size;

    vector<int> candles;
    for (int i = 0; i < size; ++i) {
        cin >> num;
        candles.push_back(num);
    }

    cout << birthdayCakeCandles(candles);
    return 0;
}