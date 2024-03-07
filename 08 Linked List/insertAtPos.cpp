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
        cout << endl;
    }
}

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

int length(node *&head)
{
    int i = 0;
    node *temp = head;
    while (temp != NULL)
    {
        i++;
        temp = temp->next;
    }
    return i;
}

void insertAtPos(node *&head, node *tail, int position, int data)
{
    node *prev = NULL;
    node *curr = head;
    if (position <= 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    if (position >= length(head))
    {
        insertAtTail(head, tail, data);
        return;
    }
    // find position
    for (int i = 1; i < position; i++)
    {
        prev = curr;
        curr = curr->next;
    }
    // create new node
    node *newNode = new node(data);
    // insert new node
    prev->next = newNode;
    newNode->next = curr;
}

int main()
{

    node *head = NULL;
    node *tail = NULL;
    int position = 10;

    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 9);
    insertAtTail(head, tail, 1);

    cout << "printing all LL" << endl;
    printLL(head);
    insertAtPos(head, tail, position, 44);
    cout << "after inserting" << endl;
    printLL(head);

    return 0;
}
