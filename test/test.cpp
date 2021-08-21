#include <iostream>
#include <sstream>

using namespace std;
  
// int countWords(string str)
// {
//     // breaking input into word using string stream
//     stringstream s(str); // Used for breaking words
//     string word; // to store individual words
  
//     int count = 0;
//     while (s >> word) 
//         count++;
//     return count;
// }
  
int main()
{
    string text = "123 for geeks geeks contribution placements";

    // cout << "Number of words are: " << countWords(s) << endl;

    stringstream ss;
    ss << text;

    string word;
    ss >> word;

    cout << word << endl;

    return 0;
}