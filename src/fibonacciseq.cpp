#include <iostream>
#include <vector>

using namespace std;

vector<int> getSequence(int size, int firstTerm, int secondTerm) 
{
    vector<int> sequence;
    
    for (int i = 0; i < size; i++)
    {
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;

        sequence.push_back(nextTerm);
    }
    return sequence;
}
int main()
{
    const int size = 10;

    int firstTerm = 0;
    int secondTerm = 1;
    vector<int> fibonacciSequence = getSequence(size, firstTerm, secondTerm);
    
    // Display the fibonacci list
    for (int seq : fibonacciSequence)
    {
        cout << seq << endl;
    }
    
    return 0;
}