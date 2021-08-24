#include <iostream>
#include <vector>

using namespace std;

vector<int> getSeq(const int& size, int firstTerm, int secondTerm)
{
    vector<int> seq;
    for (int i = 0; i < size; i++)
    {
        int nextTerm = firstTerm + secondTerm;
        firstTerm = secondTerm;
        secondTerm = nextTerm;
        seq.push_back(nextTerm);
    }
    return seq; 
}
vector<float> getGoldenRatio(const int& size, vector<int>& fibSeq)
{
    vector<float> seq;
    for (int i = 0; i < size; i++)
    {
        float nextTerm = float(fibSeq[i+1]) / fibSeq[i];
        seq.push_back(nextTerm);
    }
    return seq;
}

float round(float num)
{
    // Rounds off by 2
    float value = (int)(num * 1000 + 0.5);
    return (float)value / 1000;
}

int main() 
{
    int size = 20;
    int firstTerm = 0;
    int secondTerm = 1;

    vector<int> fibonacciSeq = getSeq(size, firstTerm, secondTerm);

    cout << "Fibonacci Sequence\n";
    // Display the fibonacci Seq
    for (int i = 0; i < fibonacciSeq.size(); i++) 
    { 
        cout << to_string(i+1) + ") " << fibonacciSeq[i] << endl; 
    }

    cout << "Golden Ratio\n";
    vector<float> goldenRatio = getGoldenRatio(size, fibonacciSeq);
    goldenRatio.erase(goldenRatio.begin() + size-1);

    // Display the golden ratio
    for (int i = 0; i < goldenRatio.size(); i++) 
    { 
        cout << to_string(i+1) + ") " << round(goldenRatio[i]) << endl; 
    }
    return 0;
}