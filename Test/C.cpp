    #include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main() {
    init();
    
    char target = 'x';
    string str_gifts = "123x45678x90";

    vector<char> original_stack_of_gifts;
    for (int i = str_gifts.size() - 1; i >= 0; --i) {
        original_stack_of_gifts.push_back(str_gifts[i]);
    }

    vector<vector<char>> moved_gifts;
    vector<char> temp;

    int size = original_stack_of_gifts.size();
    for (int i = 0; i < size; ++i) {
        if (original_stack_of_gifts[i] == target) {
            moved_gifts.push_back(temp);
            temp.clear();
            continue;
        }
        temp.push_back(original_stack_of_gifts[i]);
    }

    if (original_stack_of_gifts[original_stack_of_gifts.size()-1] != target) {
        moved_gifts.push_back(temp);

        for (int i = 0; i < moved_gifts.size(); ++i) {
            if (i == moved_gifts.size()-1) {
                for (int k = moved_gifts[i].size() -1; k >= 0; --k) {
                    cout << moved_gifts[i][k];
                }
            }
            else {
                for (int k = 0; k < moved_gifts[i].size(); ++k) {
                    cout << moved_gifts[i][k];
                }
            }
            cout << " ";
        }
    }



    return 0;
}