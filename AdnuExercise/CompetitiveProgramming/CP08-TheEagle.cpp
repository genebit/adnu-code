#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool compareString(string a, string b) { return a < b; }

vector<string> alphabaticallySort(vector<string> arr){
    sort(arr.begin(), arr.end(), compareString);
    return arr;
}

int main() {
    // PROBLEM: THE EAGLE
    int size;
    cin >> size;

    string name;
    vector<string> all_names;

    int grade;
    vector<int> all_grades;

    for (int i = 0; i < size; ++i) { // INPUT
        cin >> name >> grade;
        all_names.push_back(name);
        all_grades.push_back(grade);
    }

    int highest_grade = 0, found_at = 0;
    vector<string> result;

    for (size_t i = 0; i < all_grades.size(); ++i) {
        for (size_t j = 0; j < all_grades.size(); ++j) {
            if (highest_grade <= all_grades[j]) {
                highest_grade = all_grades[j];
                found_at = j;
            }
        }
    }
    result.push_back(all_names[found_at]);

    for (size_t i = 0; i < all_grades.size(); ++i) {
        // Check if its not an element of the array 'result'
        bool is_not_an_element = (find(result.begin(), result.end(), all_names[i]) == result.end());
        if (highest_grade == all_grades[i] && is_not_an_element) result.push_back(all_names[i]);
    }

    result = alphabaticallySort(result);
    for (string name : result) cout << name << endl; // OUTPUT
    return 0;
}