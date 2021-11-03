#include <bits/stdc++.h>

using namespace std;
/*
    SAMPLE INPUT
    saveChangesInTheEditor

    SAMPLE OUTPUT
    5

    EXPLANATION:
    String  contains five words:
        1. save
        2. Changes
        3. In
        4. The
        5. Editor
*/

int camelcase(string s) {
    int counter = 1;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] < 97)
            counter++;
    }
    return counter;
}

int main()
{
    string s;
    getline(cin, s);

    int result = camelcase(s);

    cout << result << endl;
    return 0;
}
