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
        this->length = 0;
        this->head = NULL;
    }

    ~SinglyLinkedList() 
    {
        std::cout << "LIST DELETED" << std::endl;
    }

    void insert(int data)
    {
        Node *node = new Node(); // create a new blank node
        // fill that node with data
        // note: the last node will always have the next pointer null
        node->data = data;
        node->next = this->head;

        this->head = node;

        // increment the length of this list
        this->length++;
    }

    void deletion()
    {
        if (this->head != NULL)
        {
            Node *tmp = this->head;
            this->head = this->head->next;

            delete tmp;
            this->length--;
        }
    }

    void refresh()
    {
        this->head = NULL;
        this->length = 0;
    }

    bool exist(int data)
    {
        Node *tmp = this->head; // tmp will be used to traverse the list
        while (tmp) // while tmp is not null
        {
            if (tmp->data == data)
            {
                return true;
            }
            tmp = tmp->next;
        }
        return false;
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

void print(SinglyLinkedList *list)
{
    std::cout << "[" << list->length << "] ";
    list->display();
    std::cout << std::endl;
}

int main() {
    SinglyLinkedList *list = new SinglyLinkedList();

    char operation;
    int data;

    while (std::cin >> operation >> data)
    {
        if (operation == 'i' || operation == 'd' || operation == 's' || operation == 'r')
        {
            switch (operation)
            {
                case 'i':
                    list->insert(data);
                    print(list);
                    break;
                case 'd':
                    if (list->length > 0)
                    {
                        list->deletion();
                        print(list);
                    }
                    else
                    {
                        std::cout << "THE LIST IS ALREADY EMPTY" << std::endl;
                    }
                    break;
                case 's':
                    if (list->exist(data))
                    {
                        std::cout << "VALUE FOUND" << std::endl;
                    }
                    else
                    {
                        std::cout << "VALUE NOT FOUND" << std::endl;
                    }
                    break;
                case 'r':
                    list->refresh();
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