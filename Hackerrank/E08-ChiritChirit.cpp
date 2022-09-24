#include <algorithm> 
#include<iostream>
#include<string>

class Node {
public:
    char data;
    Node* next;
};

class LinkedList {
public:
    int length;
    Node* head;

    LinkedList();
    ~LinkedList();

    void push(char data);
    void pop();
    void display();
};

LinkedList::LinkedList() {
    this->head = NULL;
    this->length = 0;
}

LinkedList::~LinkedList() {
    std::cout << "The list is deleted." << std::endl;
}

void LinkedList::push(char data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = this->head;
    this->head = new_node;
    this->length++;
}

void LinkedList::pop() {
    Node* temp = this->head;
    this->head = temp->next;
    delete temp;
    this->length--;
}

void LinkedList::display() {
    int size = this->length;
    for (int i = 0; i < size; i++) {
        std::cout << this->head->data;
        this->pop();
    }
    std::cout << std::endl;
}

int main() {
    LinkedList* list = new LinkedList();

    int base, number;

    const int HEX[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
        'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
        'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
        'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z' };

    while (std::cin >> number >> base) {
        while (number > 0) {
            int remainder = number % base;

            if (base > 10) {
                if (remainder > 9)
                    list->push(HEX[remainder]);
                else
                    list->push(std::to_string(remainder)[0]);
            }
            else list->push(std::to_string(remainder)[0]);

            number /= base;
        }
        list->display();
    }
    return 0;
}