#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int subjectGrades[] = { 90, 80, 89, 86, 91, 91, 83, 85, 90, };

    int numOfSubjects = sizeof(subjectGrades)/sizeof(subjectGrades[0]);

    int sum = subjectGrades[0];
    for (int i = 1; i < numOfSubjects; i++)
    {
        sum += subjectGrades[i];
    }
    int averageGrade = sum / numOfSubjects;

    cout << "The Average Grade is: " + to_string(averageGrade) << endl;
    
    return 0;
}