#include <iostream>

struct Node
{
    int data;
    Node *next;
};

class SinglyLinkedList
{
public:
    int length;
    Node *head;

    SinglyLinkedList()
    {
        // upon called, initialize its default values
        this->length = 0;
        this->head = NULL;
    }

    ~SinglyLinkedList() // destructor
    {
        std::cout << "List deleted..." << std::endl;
    }

    void insert(int num)
    {
        Node *node = new Node(); // create a new blank node
        // fill that node with data
        // note: the last node will always have the next pointer null
        node->data = num;
        node->next = this->head;

        this->head = node;

        // increment the length of this list
        this->length++;
    }
    
    void deletion()
    {
        
    }
    
    void refresh()
    {
        
    }

    void display()
    {
        Node *tmp = this->head; // tmp will be used to traverse the list
        if (this->length == 0)
        {
            std::cout << "No elements in the list." << std::endl;
        }
        else
        {
            while (tmp) // while tmp is not null
            {
                std::cout << tmp->data << std::endl;
                tmp = tmp->next;
            }
        }
    }
};

char operation(char op) {
  if (op == 'i' || op == 'd' || op == 'r')
    return op;
  return 'x';
}

int main()
{
    SinglyLinkedList *list = new SinglyLinkedList();
    
    char op;
    int value;
    
    while (std::cin >> op >> value)
    {
        if (operation(op) != 'x')
        {
            switch (operation(op))
            {
                case 'i':
                    list->insert(value);
                    std::cout << "[" << list->length << "]" << list->display() << std::endl;
                    break;
                case 'd':
                    list->deletion(value);
                    break;
                case 'r':
                    list->refresh();
                    break;
            }
        }
    }
    
    return 0;
}