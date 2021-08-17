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
        float nextTerm = float(fibSeq[i]) / fibSeq[i+1];
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
    for (int item : fibonacciSeq) { cout << item << endl; }

    cout << "Golden Ratio\n";
    vector<float> goldenRatio = getGoldenRatio(size, fibonacciSeq);
    goldenRatio.erase(goldenRatio.begin() + size-1);

    // Display the golden ratio
    for (float item : goldenRatio) { cout << round(item) << endl; }

    return 0;
}