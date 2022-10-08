#include <iostream>
#include <vector>

struct Student {
    int student_front_id;
    int student_id;
};

// for getting the unordered queue
void queue_students(int queue_size, std::vector<Student>& students_in_line) {
    for (int i = 0; i < queue_size; i++) {
        int student_ahead_id, student_id;
        std::cin >> student_ahead_id >> student_id;

        students_in_line.push_back(Student());
        students_in_line[i].student_front_id = student_ahead_id;
        students_in_line[i].student_id = student_id;
    }
}

std::vector<Student> sort_queue(std::vector<Student> original_queue, Student first, int position) {
    std::vector<Student> sorted_queue;
    sorted_queue.push_back(first);

    original_queue.erase(original_queue.begin() + position);

    for (int i = 0; i < original_queue.size(); i++) {
        for (int k = 0; k < original_queue.size(); k++) {
            if (original_queue[k].student_front_id == sorted_queue[sorted_queue.size() - 1].student_id)
                sorted_queue.push_back(original_queue[k]);
        }
    }
    return sorted_queue;
}


int main() {
    int queue_size;
    std::cin >> queue_size;

    std::vector<Student> students;
    queue_students(queue_size, students);

    // find the first student and its position
    Student first;
    int position = 0;
    for (int i = 0; i < students.size(); i++) {
        if (students[i].student_front_id == 0) {
            first = students[i];
            position = i;
            break;
        }
    }

    // sort the students
    std::vector<Student> sorted_queue_students = sort_queue(students, first, position);


    // display the newly sorted student queue
    for (Student student : sorted_queue_students) {
        std::cout << student.student_id << " ";
    }
    return 0;
}