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
void insertAtHead(node *&head, node *&tail, int data)
{
    node *newNode = new node(data); // if LL is empty
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

int main()
{

    node *head = NULL;
    node *tail = NULL;

    insertAtHead(head, tail, 5);
    insertAtHead(head, tail, 7);
    insertAtHead(head, tail, 9);
    insertAtHead(head, tail, 1);

    cout << "printing all LL" << endl;
    printLL(head);

    return 0;
}
