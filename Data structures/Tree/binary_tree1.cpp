#include <bits/stdc++.h>
using namespace std;

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

Node *level_order_input(Node *root)
{
    int data;
    cout << "Enter data for node: ";
    cin >> data;

    if (data <= 0)
        return nullptr;

    Node *root = new Node(data);

    queue<Node *> treeNodes;
    treeNodes.push(root);

    while (!treeNodes.empty())
    {
        Node *currentNode = treeNodes.front();
        treeNodes.pop();

        int valLeft, valRight;
        cin >> valLeft >> valRight;

        Node *left = (valLeft > 0) ? new Node(valLeft) : nullptr;
        Node *right = (valRight > 0) ? new Node(valRight) : nullptr;

        currentNode->leftChild = left;
        currentNode->rightChild = right;

        if (left)
            treeNodes.push(left);
        if (right)
            treeNodes.push(right);
    }

    return root;
}

Node *level_order_traverse(Node *root)
{
    if (!root)
    {
        cout << "Tree is empty\n";
        return;
    }

    queue<Node *> treeNodes;
    treeNodes.push(root);

    while (!treeNodes.empty())
    {
        Node *currentNode = treeNodes.front();
        treeNodes.pop();

        cout << currentNode->data << " ";

        if (currentNode->leftChild)
            treeNodes.push(currentNode->leftChild);

        if (currentNode->rightChild)
            treeNodes.push(currentNode->rightChild);
    }
}

Node *depth_wise_input(Node *root)
{
    int data;
    cout << "Enter data for node: ";
    cin >> data;

    if (data <= 0)
        return nullptr;

    Node *newNode = new Node(data);

    cout << "Left node data: ";
    root->leftChild = depth_wise_input(root->leftChild);

    cout << "Right node data: ";
    root->rightChild = depth_wise_input(root->rightChild);

    return root;
}

void pre_order_traverse(Node *root)
{
    if (!root)
        return;

    cout << root->data << ' ';
    pre_order_traverse(root->leftChild);
    pre_order_traverse(root->rightChild);
}

void in_order_traverse(Node *root)
{
    if (!root)
        return;

    pre_order_traverse(root->leftChild);
    cout << root->data << ' ';
    pre_order_traverse(root->rightChild);
}

void post_order_traverse(Node *root)
{
    if (!root)
        return;

    pre_order_traverse(root->leftChild);
    pre_order_traverse(root->rightChild);
    cout << root->data << ' ';
}

int main()
{
    Node *root = nullptr;
    root = depth_wise_input(root);

    return 0;
}