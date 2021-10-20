// #include <iostream>
// #include <vector>
// #include <sstream>

// using namespace std;

// int main()
// {
//     string str = "0 1 2 3";
//     stringstream ss(str);

//     int num;
//     vector<int> arr;

//     while (ss >> num) {
//         arr.push_back(num);
//     }
//     for (int i : arr)
//         cout << i << endl;
// }

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main() 
{
    int size;
    cin >> size;
        
    // Convert input to string and store input to an array 
    vector<vector<string>> str_list;
    
    for (int i = 0; i <= size; i++) {
        string str;
        getline(cin, str);
        vector<string> temp;
        temp.push_back(str);
        str_list.push_back(temp);
    }

    vector<vector<int>> arr;
    for (int i = 0; i < str_list.size(); i++) {
        for (int j = 0; j < str_list.size(); j++) {
            stringstream ss(str_list[i][j]);
            int num;
            while (ss >> num) {
                vector<int> temp;
                temp.push_back(num);
                arr.push_back(temp);
            }    
        }
        
    }
    
    for (vector<int> i : arr) {
        for (int j : i) {
            cout << j << endl;
        }
    }
    return 0;
}