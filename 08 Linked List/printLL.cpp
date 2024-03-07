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

int main()
{

    node *first = new node(5);
    node *second = new node(6);
    node *third = new node(9);
    node *fourth = new node(3);
    node *fifth = new node(7);
    node *sixth = new node(1);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "printing all LL" << endl;
    printLL(first);

    return 0;
}
