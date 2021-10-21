#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    
    for (int i = 0; i < size; i++) {
        cout << "TEST" << endl;
        string tmp;
        // getline(cin, tmp);
        cin >> tmp;
    }
}

// #include <iostream>
// #include <vector>
// #include <sstream>

// using namespace std;

// int main() 
// {
    // int size;
    // cin >> size;
        
    // Convert input to string and store input to an array 
    // vector<vector<string>> str_list;
    
    // for (int i = 1; i <= size; i++) {
    //     string str;
    //     getline(cin, str);
    //     vector<string> temp;
    //     temp.push_back(str);
    //     str_list.push_back(temp);
    // }
    
    // vector<vector<int>> arr;
    // for (int i = 0; i < str_list.size(); i++) {
    //     for (int j = 0; j < str_list.size(); j++) {
    //         stringstream ss(str_list[i][j]);
    //         int num;
    //         while (ss >> num) {
    //             vector<int> temp;
    //             temp.push_back(num);
    //             arr.push_back(temp);
    //         }    
    //     }
    // }

    // int size;
    // cin >> size;

    // vector<vector<int>> results;

    // for (int i = 0; i < size; i++)
    // {
    //     int num;
    //     int counter = 0;
    //     while (cin >> num) 
    //     {
    //         vector<int> tmp;
    //         tmp.push_back(num);
    //         results.push_back(tmp);

    //         // Break Handler
    //         counter++;
    //         if (counter == size)
    //             break;
    //     }
    // }

    // for (vector<string> i : str_list) {
    //     for (string j : i) {
    //         cout << j << endl;
    //     }
    // }
//     return 0;
// }