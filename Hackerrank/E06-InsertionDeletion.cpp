#include <iostream>
#include <cmath>

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
        std::cout << "List deleted" << std::endl;
    }

    void insert(int num)
    {
        Node *node = new Node(); // create a new blank node
        // fill that node with data
        node->data = num;
        node->next = this->head;

        this->head = node;
        this->length++;
    }

    void deletion(int n)
    {
        if (this->head != NULL)
        {
            Node *tmp = this->head;
            this->head = this->head->next;

            delete tmp;
            this->length--;
        }
    }

    void refresh(int value)
    {
        if (this->length > 0)
        {
            this->head = NULL;
            this->length = 0;
        }
    }

    void display()
    {
        Node *tmp = this->head; // tmp will be used to traverse the list
        while (tmp) // while tmp is not null
        {
            std::cout << tmp->data << " ";
            tmp = tmp->next;
        }
    }
};

char operation(char op)
{
    if (op == 'i' || op == 'd' || op == 'r')
        return op;
    return 'x';
}

void print(SinglyLinkedList *list)
{
    std::cout << "[" << list->length << "] ";
    list->display();
    std::cout << std::endl;
}

int main()
{
    SinglyLinkedList *list = new SinglyLinkedList();

    char _operation;
    int value;

    while (std::cin >> _operation >> value)
    {
        bool operationValid = operation(_operation) != 'x';
        if (operationValid)
        {
            // determine each
            switch (operation(_operation))
            {
            case 'i':
                list->insert(value); // process
                print(list);
                break;
            case 'd':
                if (list->length > 0)
                {
                    list->deletion(value); // process
                    print(list);
                }
                else
                {
                    std::cout << "THE LIST IS ALREADY EMPTY" << std::endl;
                }
                break;
            case 'r':
                list->refresh(value); // process
                print(list);
                break;
            }
        }
        else
        {
            std::cout << "INVALID COMMAND" << std::endl;
        }
    }

    return 0;
}