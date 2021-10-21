#include <iostream>
#include <vector>

using namespace std;

int main() {
    // f 1
    // a 3
    // n 5
    // v 7

    char character;
    int size;
    
    vector<string> result;
    while (cin >> character >> size) {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j <= i; j++) {
                tmp.push_back(character);
                tmp.push_back(' ');
            }
            character++;
        }
    }
    // for (int i = 0; i < size; i++) {
    //     for (int j = 0; j <= i; j++) {

    //     }    
    // }
    
    return 0;
}