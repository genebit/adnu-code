#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

struct Date {
    int mm;
    int dd;
    int yy;
};

struct StudentRecord {
    int id;
    string firstName;
    string lastName;
    Date birthDay;
};

// nested structures
struct Point {
    int x, y;
};
struct Line {
    Point p1, p2;
};
struct Triangle {
    Point p1, p2, p3;
};
int main() {
    init();

    // declaration of an object of struct type
    // a struct is an object type
    Triangle t1;

    cin >> t1.p1.x >> t1.p1.y;
    cin >> t1.p2.x >> t1.p2.y;
    cin >> t1.p3.x >> t1.p3.y;

    int points[6] = { t1.p1.x, t1.p2.x, t1.p3.x, t1.p1.y, t1.p2.y, t1.p3.y };

    int pointsX[3] = { t1.p1.x, t1.p2.x, t1.p3.x };
    int pointsY[3] = { t1.p1.y, t1.p2.y, t1.p3.y };

    int max = *(max_element(begin(points), end(points))) + 1;

    int grid[max][max];
    int x = 0;
    for (int i = 5; i >= 0; --i) {
        for (int j = 0; j < 5; ++j) {
            grid[i][j] = i;
        }
    }

    for (int i = 0; i < 3; i++) {
        grid[pointsX[i]][pointsY[i]] = 'x';
    }

    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < max; ++j) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }


    return 0;
}