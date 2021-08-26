#include <iostream>
#include <sstream>

using namespace std;

int countWords(string text)
{
    int count = 0;

    stringstream ss(text);
    string word;

    while (ss >> word)
        count++;
    return count;
}

int main()
{
    // Count how many words occured in the text
    string text;
    getline(cin, text);

    int result = countWords(text);
    cout << "Number of Words: " << result << endl;

    return 0;
}