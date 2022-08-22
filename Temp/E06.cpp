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
        this->length++;
    }
    
    void deletion(int n)
    {
        if (this->head != NULL)
        {
            for (int i = 0; i < abs(n); i++) 
            {
                Node *tmp = this->head;
                this->head = this->head->next;

                delete tmp;
                this->length--;
            }
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

void init() 
{
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

int main()
{
    init();
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
                    
                    // output
                    std::cout << "[" << list->length << "] ";
                    list->display();
                    std::cout << std::endl;
                    break;
                case 'd':
                    if ((list->length - abs(value)) > 0) // checks to not go less over 0
                    {
                        list->deletion(value); // process

                        // output
                        std::cout << "[" << list->length << "] ";
                        list->display();
                        std::cout << std::endl;
                    }
                    else 
                    {
                        std::cout << "THE LIST IS ALREADY EMPTY" << std::endl;
                    }
                    break;
                case 'r':
                    list->refresh(value); // process

                    // output
                    std::cout << "[" << list->length << "] ";
                    list->display();
                    std::cout << std::endl;
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