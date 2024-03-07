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

void deleteAtPos(node *&head, node *&tail, int position)
{
    if (head == NULL)
        cout << "LL is empty" << endl;
    node *prev = NULL;
    node *curr = head;
    node *after = NULL;
    if (position == 1)
    {
        head = head->next;
        curr->next = NULL;
        delete curr;
    }
    int len = length(head);
     if (position == len)
    {
        for (int i = 1; i < len; i++)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        tail = prev;
        delete curr;
    }

    for(int i=1;i<position;i++)
            {
                prev=curr;
                curr=curr->next;
                after=curr->next;
            }
            prev->next=after;
            curr->next=NULL;
            delete curr;
}

int main()
{

    node *head = NULL;
    node *tail = NULL;
    int position = 1;

    insertAtTail(head, tail, 5);
    insertAtTail(head, tail, 7);
    insertAtTail(head, tail, 9);
    insertAtTail(head, tail, 1);

    cout << "printing all LL" << endl;
    printLL(head);
    deleteAtPos(head, tail, position);
    cout << "after deleting" << endl;
    printLL(head);

    return 0;
}
