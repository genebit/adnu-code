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

    void deleteNode(Node *node)
    {
        Node *prev = this->head;

        // process for getting the previous node
        Node *current = this->head;
        while (current)
        {
            // if the data is at the start or end then assign it to prev
            // if the data is in the middle then get the previous node by checking 
            // if the current->next's data is the targeted node that is to be deleted.
            if (current->data == node->data || current->next->data == node->data)
            {
                prev = current;
                break;
            }
            current = current->next;
        }

        // if the targeted node is just at the start
        // point the head to the next node
        // delete the first node.
        if (node->data == this->head->data) 
        {
            Node *tmp = this->head;
            this->head = this->head->next;
            delete tmp;
            this->length--;

        }
        else 
        {
            // otherwise, we are deleting from somewhere in the middle or in the end
            // get the targeted node's previous node and assign the prev->next node to the next node of
            // the targeted node, then delete the node.
            prev->next = node->next;
            delete node;
            this->length--;
        }
    }

    void refresh()
    {
        int size = this->length;
        for (int i = 0; i < size; i++)
        {
            deletion();
        }
    }

    Node* exist(int data)
    {
        Node *tmp = this->head; // tmp will be used to traverse the list
        while (tmp) // while tmp is not null
        {
            if (tmp->data == data)
            {
                return tmp;
            }
            tmp = tmp->next;
        }
        return NULL;
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

int main() 
{
    SinglyLinkedList *list = new SinglyLinkedList();

    char operation;
    int data, i = 0;

    while (std::cin >> operation >> data)
    {
        if (operation == 'i' || operation == 'd' || operation == 's' || operation == 'r' || operation == 'x')
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
                case 'x':
                    if (list->exist(data))
                    {
                        list->deleteNode(list->exist(data));
                        print(list);
                    }
                    else
                    {
                        std::cout << "VALUE NOT FOUND" << std::endl;
                    }
                    break;
            }
        }
        else
        {
            std::cout << "INVALID COMMAND" << std::endl;
        }
        i++;
    }

    return 0;
}