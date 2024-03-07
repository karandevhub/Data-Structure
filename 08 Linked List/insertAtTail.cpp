#include <iostream>
using namespace std;

class node
{ // creation of node
public:
    int data;
    node *next;

    node()
    {
        this->data = 0;
        this->next = NULL; // default constructor
    }

    node(int data)
    { // constructor when data is given
        this->data = data;
        this->next = NULL;
    }
};

void printLL(node *head)
{
    node *temp = head;
    {
        while (temp != NULL)
        {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
}

//
void insertAtTail(node *&head, node *&tail, int data)
{

    node *newNode = new node(data);

    if (head == NULL) // if LL is empty
    {
        head = newNode;
        tail = newNode;
        return;
    }

    tail->next = newNode;
    tail = newNode;
}

int main()
{

    node *head = NULL;
    node *tail = NULL;

    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 9);
    insertAtTail(head, tail, 1);

    cout << "printing all LL" << endl;
    printLL(head);

    return 0;
}
