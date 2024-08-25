#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *leftChild;
    Node *rightChild;

    Node(int data)
    {
        this->data = data;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
};

void populate(Node *root, int prevVal)
{
    int leftVal, rightVal;

    cout << "Left value of " << prevVal << " : ";
    cin >> leftVal;

    if (leftVal >= 1)
    {
        root->leftChild = new Node(leftVal);
        populate(root->leftChild, leftVal);
    }

    cout << "Right value of " << prevVal << " : ";
    cin >> rightVal;

    if (rightVal >= 1)
    {
        root->rightChild = new Node(rightVal);
        populate(root->rightChild, rightVal);
    }
}

void pre_order_traverse(Node *root)
{
    if (!root)
        return;

    cout << root->data << ' ';
    pre_order_traverse(root->leftChild);
    pre_order_traverse(root->rightChild);
}

int main()
{
    int root_val = 0;
    cout << "Enter the root: ";
    cin >> root_val;

    Node *root = new Node(root_val);
    populate(root, root_val);
    pre_order_traverse(root);

    return 0;
}