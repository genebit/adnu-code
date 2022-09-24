#include <iostream>
#include <vector>

int main() {
    int available_badge_numbers, badge_number = 1;
    std::cin >> available_badge_numbers;

    std::vector<int> student_queue;

    char command;
    while (std::cin >> command) {
        // add the student in the queue (enqueue)
        if (command == 'A') {
            if (student_queue.size() < available_badge_numbers) {
                student_queue.push_back(badge_number);
                std::cout << student_queue.size() << " " << badge_number << std::endl;
            } else {
                std::cout << "QUEUE IS FULL" << std::endl;
            }
        }

        // pop the first student in line of queue (dequeue)
        if (command == 'R') {
            if (student_queue.size() > 0) {
                badge_number++;

                if (badge_number > available_badge_numbers)
                    badge_number = 1;

                // dequeue
                student_queue.erase(student_queue.begin());

                if (student_queue.size() == 0)
                    std::cout << "QUEUE IS EMPTY" << std::endl;
                else
                    std::cout << student_queue.size() << " " << badge_number << std::endl;
            } 
            else {
                std::cout << "QUEUE IS EMPTY" << std::endl;
            }
        }
    }

    return 0;
}