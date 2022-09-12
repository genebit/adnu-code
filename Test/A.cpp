#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

struct Node {
    string data;
    Node *prev;
    Node *next;
};

class DoublyLinkedList {
public:
    int size;
    Node *head;

    DoublyLinkedList();
    ~DoublyLinkedList();

    void push_front(string data);
    void push_back(string data);
    void pop_front();
    void pop_back();
    void search_data(string data);
    void pop_node(Node *node);
    void display_forward();
    void display_backward();
};

DoublyLinkedList::DoublyLinkedList() {
    this->head = NULL;
    this->size = 0;
}

DoublyLinkedList::~DoublyLinkedList() {
    cout << "List Deleted." << endl;
}

void DoublyLinkedList::push_front(string data) {
    Node *new_node = new Node();
    new_node->data = data;
    new_node->prev = NULL;
    new_node->next = this->head;
    this->head = new_node;
    this->size++;
}

void DoublyLinkedList::push_back(string data) {
    if (this->head == NULL) {
        this->push_front(data);        
    }
    else {
        Node *new_node = new Node();
        Node *temp = this->head;
        while (temp) {
            if (temp->next == NULL) {
                new_node->data = data;
                new_node->prev = temp;
                temp->next = new_node;
                this->size++;
                break;
            }
            temp = temp->next;
        }
    }
}

void DoublyLinkedList::pop_front() {
    Node *temp = this->head;
    this->head = temp->next;
    this->size--;
    delete temp;
}

void DoublyLinkedList::pop_back() {
    if (this->head == NULL) {
        this->pop_back();        
    }
    else {
        Node *temp = this->head;
        while (temp) {
            if (temp->next == NULL) {
                temp->prev->next = NULL;
                this->size--;
                delete temp;
                break;
            }
            temp = temp->next;
        }
    }
}

void DoublyLinkedList::display_forward() {
    Node *temp = this->head;
    while (temp) {
        cout << temp->data << endl;
        temp = temp->next;
    }
}

void DoublyLinkedList::display_backward() {
    // Node *tail = this->head;
    // while (tail->next) {
    //     tail = tail->next;
    // }

    // while (tail->prev) {
    //     cout << tail->prev->data << endl;
    //     tail = tail->prev;
    // }
}

int main() {
    init();

    DoublyLinkedList *list = new DoublyLinkedList();
    list->push_back("Burger");
    list->push_back("Spaghetti");
    list->push_back("Carbonara");
    list->pop_back();

    // list->display_forward();
    list->display_backward();

    return 0;
}