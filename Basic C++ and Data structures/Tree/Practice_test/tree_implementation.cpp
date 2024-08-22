#include <bits/stdc++.h>
using namespace std;

// defining the structure of the node
class Node
{
public:
    int data = 0;
    Node *leftChild = nullptr;
    Node *rightChild = nullptr;

    Node(int data)
    {
        this->data = data;
    }
};

// as for input, 0 or less than 0 mean null value
Node *depth_wise_input(Node *root)
{
    int data;
    cout << "Enter data: ";
    cin >> data;

    if (data <= 0)
        return nullptr;

    Node *newNode = new Node(data);
    root = newNode;

    cout << "Enter left child data: ";
    root->leftChild = depth_wise_input(root->leftChild);

    cout << "Enter right child data: ";
    root->rightChild = depth_wise_input(root->rightChild);

    return root;
}

void preorder_display(Node *root)
{
    if (!root)
        return;

    cout << root->data << " ";
    preorder_display(root->leftChild);
    preorder_display(root->rightChild);
}

int main()
{
    Node *root = nullptr;
    root = depth_wise_input(root);
    preorder_display(root);

    return 0;
}