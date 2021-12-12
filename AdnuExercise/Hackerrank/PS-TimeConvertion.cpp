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

    // (stoi(to_string(hh)) < 10) ? converted += "0" + to_string(hh) : converted += to_string(hh);
    // converted += col;
    // (stoi(to_string(mm)) < 10) ? converted += "0" + to_string(mm) : converted += to_string(mm);
    // converted += col;
    // (stoi(to_string(ss)) < 10) ? converted += "0" + to_string(ss) : converted += to_string(ss);

    return converted;
}

int main() {
    string time;
    getline(cin, time);
    cout << timeConversion(time);

    return 0;
}