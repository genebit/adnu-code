#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// REVIEW THIS MORE
/*
    ---INPUT---
    3 ===> The size of the array
    30 40 45 10 10 ===> Kristen's Scores
    40 40 40 10 10 ===> Other student's scores
    50 20 30 10 10 ===> Other student's scores
    ---OUTPUT---
    1 ===> Only 1 got a higher score than kristen
*/
class Student
{
    int scores[5];
public:
    void input()
    {
        for (int i = 0; i < 5; i++)
        {
            cin >> scores[i];
        }
    }
    int calculateTotalScore()
    {
        int totalScore = scores[0];
        for (int i = 1; i < 5; i++)
        {
            totalScore += scores[i];
        }
        return totalScore;
    }
};

int main()
{
    int size;
    cin >> size;
    Student *students = new Student[size];

    for (int i = 0; i < size; i++)
    {
        students[i].input();
    }

    // calculate kristen's score
    int kristen_score = students[0].calculateTotalScore();

    // determine how many students scored higher than kristen
    int count = 0;
    for (int i = 1; i < size; i++)
    {
        int total = students[i].calculateTotalScore();
        if (total > kristen_score)
        {
            count++;
        }
    }
    cout << count;

    return 0;
}
