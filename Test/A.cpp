#include <iostream>
#include <vector>

using namespace std;

struct Student {
    int student_front_id;
    int student_id;
};

int main() {
    
    // recieve input
    // { student_front_id: 92, student_id: 7 } => not the first
    // { student_front_id: 0, student_id: 92 } => there is no student in front of 92 therefore 92 is first
    // current order: 92 7
    
    // { student_front_id: 31, student_id: 141 } => there is nothing to connect yet
    // { student_front_id: 7, student_id: 31 } => student 7 has a student in behind him (student 31)
    // current order: 92 7 31 141
    
    int queue_size;
    cin >> queue_size;
    
    vector<Student> students_in_line;
    for (int i = 0; i < queue_size; i++) {
        int student_front_id, student_id;
        cin >> student_front_id >> student_id;
        
        students_in_line.push_back(Student());
        students_in_line[i].student_front_id = student_front_id;
        students_in_line[i].student_id = student_id;
    }
    
    // find the first student
    Student first;
    for (int i = 0; i < students_in_line.size(); i++) {
        if (students_in_line[i].student_front_id == 0) {
            first = students_in_line[i];
            break;
        }
    }
    
    vector<Student> sorted_queue_students;
    sorted_queue_students.push_back(first);
    
    for (int i = 0; i < students_in_line.size(); i++) {
        if (students_in_line[i].student_front_id == sorted_queue_students[sorted_queue_students.size()-1].student_id) {
            sorted_queue_students.push_back(students_in_line[i]);
        }
    }
    
    for (int i = 0; i < students_in_line.size(); i++) {
        bool found = false;
        for (int k = 0; k < students_in_line.size(); k++) {
            if (students_in_line[i].student_id == sorted_queue_students[k].student_id) {
                found = true;
                break;
            }
        }
        if (!found)
            sorted_queue_students.push_back(students_in_line[i]);
    }
    
    for (Student student : sorted_queue_students) {
        cout << student.student_id << " ";
    }
    return 0;
}