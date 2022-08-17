#include <iostream>

using namespace std;

class Node 
{
public: 
    string name;
    Node *next;
};

class SinglyLinkedList
{
public:
    int length;
    Node *head;
    
    SinglyLinkedList();
    ~SinglyLinkedList();
    
    void insert(std::string n);
    void display();
};

SinglyLinkedList::SinglyLinkedList() 
{
    this->length = 0;
    this->head = NULL;
}

SinglyLinkedList::~SinglyLinkedList() 
{
    std::cout << "List deleted..." << std::endl;
}

void SinglyLinkedList::insert(std::string n) 
{
    Node *node = new Node();
    node->name = n;
    node->next = this->head;
    this->head = node;
    this->length++;
}

void SinglyLinkedList::display() 
{
    Node *tmp = this->head;
    while (tmp)
    {
        cout << tmp->name << endl;
        tmp = tmp->next;
    }
}

int main()
{
    SinglyLinkedList *list = new SinglyLinkedList();
    list->insert("A");
    list->insert("B");
    list->insert("C");
    
    list->display();
    
    return 0;
}