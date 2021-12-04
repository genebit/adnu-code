#include <iostream>
#include <vector>

using namespace std;

void dec_to_binary(int dec) {
    vector<int> binary;

    cout << "Solution:\n";
    for (int i = dec; i > 0; i /= 2) {
        cout << setfill(' ') << setw(to_string(dec).size());
        int bit = (i % 2 != 0);
        cout << i << " ÷ 2 = " << bit << endl;
        binary.push_back(bit);
    }

    cout << "\nThe Binary Convertion of " + to_string(dec) + " is: ";
    for (int i = binary.size()-1; i >= 0; i--) {
        cout << binary[i];
    }
}
int main()
{   
    int dec;
    cin >> dec;

    dec_to_binary(dec);

    return 0;
}