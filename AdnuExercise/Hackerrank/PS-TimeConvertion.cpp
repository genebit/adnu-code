#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <sstream>

using namespace std;

string timeConversion(string time) {
    string converted;
    stringstream s_tream(time);

    int hh, mm, ss;
    char col;
    string time_of_day;

    s_tream >> hh >> col >> mm >> col >> ss >> time_of_day;
    int formatPM[11] = { 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23 };

    if (time_of_day == "PM" && hh < 12) hh = formatPM[hh-1];
    if (time_of_day == "AM" && hh == 12) hh = 0;

    if (stoi(to_string(hh)) < 10) hh = "0" + hh;
    if (stoi(to_string(mm)) < 10) mm = "0" + mm;
    if (stoi(to_string(ss)) < 10) ss = "0" + ss;

    // converted = hh + col + mm + ss;

    return converted;
}

int main() {
    // string time;
    // getline(cin, time);
    // cout << timeConversion(time);

    // NOTE(GENE): Unfinished
    int num = 9;
    if (stoi(to_string(num)) < 10) cout << "0" + to_string(num);

    return 0;
}