#include <iostream>
#include <cstdio>
#include <vector>
#include <string>
/*
Create a function that creates a box based on dimension n.
makeBox(5) ➞ [
  "#####",
  "#   #",
  "#   #",
  "#   #",
  "#####"
]

makeBox(3) ➞ [
  "###",
  "# #",
  "###"
]

makeBox(2) ➞ [
  "##",
  "##"
]
*/
using namespace std;

vector<string> makeBox(int n) {
  vector<string> box;

  for (int i = 0; i < n; ++i) {
    string line = "";
    for (int j = 0; j < n; ++j) {
      char symbol = '#';
      bool row_check = (i > 0 && i < n - 1);
      bool mid_check = (j > 0 && j < n - 1);

      if (row_check && mid_check) symbol = ' ';
      line.push_back(symbol);
    }
    box.push_back(line);
  }
  return box;
}

int main() {
  int n;
  cin >> n;
  for (string i : makeBox(n)) {
    cout << i << endl;
  }
  return 0;
}
