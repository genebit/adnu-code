#include <iostream>

struct Node {
    int data;
    Node* prev;
    Node* next;
};

class DoublyLinkedList {
public:
    int size;
    Node* head;
    Node* tail;

    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(int data);
    void pop_front();
    void refresh();
    void display_forward();
    void display_reversed();
    void setTail();
};

DoublyLinkedList::DoublyLinkedList() {
    this->head = NULL;
    this->tail = NULL;
    this->size = 0;
}

DoublyLinkedList::~DoublyLinkedList() {
    std::cout << "List Deleted." << std::endl;
}

void DoublyLinkedList::setTail() {
    Node* temp = this->head;
    while (temp) {
        if (temp->next == NULL) {
            this->tail = temp;
            break;
        }
        temp = temp->next;
    }
}

void DoublyLinkedList::push_front(int data) {
    Node* new_node = new Node();
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = this->head;

    if (this->head != NULL)
        this->head->prev = new_node;
    this->head = new_node;
    this->size++;

    this->setTail();
}

void DoublyLinkedList::pop_front() {
    Node* temp = this->head;
    this->head = temp->next;
    this->size--;
    delete temp;
}

void DoublyLinkedList::display_forward() {
    Node* temp = this->head;
    while (temp) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
}

void DoublyLinkedList::display_reversed() {
    Node* tail = this->tail;
    while (tail != this->head) {
        std::cout << tail->data << " ";
        tail = tail->prev;
    }
    std::cout << tail->data;
}

void DoublyLinkedList::refresh() {
    int size = this->size;
    for (int i = 0; i < size; i++)
        this->pop_front();
}

void print(DoublyLinkedList* list, std::string option) {
    std::cout << "[" << list->size << "] ";
    if (option == "forward")     list->display_forward();
    if (option == "reversed")    list->display_reversed();
    std::cout << std::endl;
}

int main() {
    DoublyLinkedList* list = new DoublyLinkedList();

    char operation;
    int value;

    while (std::cin >> operation >> value) {
        if (operation == 'i' || operation == 'd' || operation == 'e' || operation == 'r') {
            switch (operation) {
            case 'i': // insertion
                list->push_front(value);
                print(list, "forward");
                break;
            case 'd': // deletion
                if (list->size > 0) {
                    list->pop_front();
                    print(list, "forward");
                }
                else {
                    std::cout << "THE LIST IS ALREADY EMPTY" << std::endl;
                }
                break;
            case 'e': // reverse
                print(list, "reversed");
                break;
            case 'r': // refresh
                list->refresh();
                print(list, "forward");
                break;
            }
        }
        else {
            std::cout << "INVALID COMMAND" << std::endl;
        }
    }

    return 0;
}