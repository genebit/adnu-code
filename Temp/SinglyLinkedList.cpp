#include <iostream>

void init()
{
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

struct Node
{
    std::string name;
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

    void insert(std::string name)
    {
        Node *node = new Node(); // create a new blank node
        // fill that node with data
        // note: the last node will always have the next pointer null
        node->name = name;
        node->next = this->head;

        this->head = node;

        // increment the length of this list
        this->length++;
    }

    bool exist(std::string name)
    {
        Node *tmp = this->head;

        while (tmp)
        {
            if (tmp->name == name)
                return true;
            tmp = tmp->next;
        }

        return false;
    }

    Node *find(std::string name)
    {
        Node *tmp = this->head;
        if (this->exist(name))
        {
            while (tmp)
            {
                if (tmp->name == name)
                    return tmp;
                tmp = tmp->next;
            }
        }
        return tmp;
    }

    void remove_start()
    {
        if (this->head != NULL)
        {
            Node *tmp = this->head;
            this->head = this->head->next;

            delete tmp;
            this->length--;
        }
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
                std::cout << tmp->name << std::endl;
                tmp = tmp->next;
            }
        }
    }
};

int main()
{
    init();

    std::string arr[5] = { "Josephine", "Alex", "Harold", "Gene", "Lad" };

    SinglyLinkedList *list = new SinglyLinkedList();
    for (int i = 0; i < 5; ++i)
        list->insert(arr[i]);

    list->remove_end();
    list->display();

    std::cout << "\nList size: " << list->length;

    return 0;
}