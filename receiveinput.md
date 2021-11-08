### Different Types of Receiving Input from a C++ File:

1. _the standard interactive input through cmd:_
```
    int main() {
        string str;
        cin >> str; // or getline(cin, str);

        return 0;
    }
```
2. _use an external txt file to input through cmd:_
```
    $ ./main.cpp < input.txt
```
3. _use a setup such as **in.txt** and **out.txt** and map the results for stdin and stdout to the txt files using **freopen()**:_

```
    void init() {
        freopen("../in.txt", "r", stdin);
        freopen("../out.txt", "w", stdout);
    }
    int main() {
        init();
            
        string str;
        cin >> str;

        cout << str; // The output will be on the out.txt
        return 0;
    }    
```
4.<br>**a.)** _if the input is like this:_
```
    SAMPLE INPUT:
        1 2 3
        4 5 6
        7 8 9
        ...     -> infinite

    int main() {
        string str;
        while (getline(cin, str)) {
            int num;
            stringstream ss(str);
            while
        }
    }
```
  **b.)** _if the input is like this:_
```
    SAMPLE INPUT:
        3       -> size of the list
        1 2 3   -> list 1
        4 5 6   -> list 2...
        7 8 9

    int main() {
        int size; // Variable for N size of each list
        cin >> size;
        cin >> ws; // Ignore white space

        vector<vector<int>> list; 
        for (int i = 0; i < size; i++) {
            string str;
            getline(cin, str);

            stringstream ss(str);
            int num;
            vector<int> temp;
            while (ss >> num) {
                temp.push_back(num);
            }
            list.push_back(temp);
        }
    }
```