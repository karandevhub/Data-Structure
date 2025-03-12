#include <iostream>
#include <queue>

using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    };
};

int main()
{
    int x, left, right;
    cout << "Enter the root node: ";
    cin >> x;
    queue<Node *> q;

    Node *root = new Node(x);
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << "Enter the left child of " << temp->data << " : ";
        cin >> left;
        if (left != -1)
        {
            temp->left = new Node(left);
            q.push(temp->left);
        }
        cout << "Enter the right child of " << temp->data << " : ";
        cin >> right;
        if (right != -1)
        {
            temp->right = new Node(right);
            q.push(temp->right);
        }
    }
    return 0;
}