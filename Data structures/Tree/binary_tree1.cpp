#include <bits/stdc++.h>
using namespace std;

class Node
{
    int data = 0;
    Node *leftChild = nullptr;
    Node *rightChild = nullptr;

public:
    Node(int data)
    {
        this->data = data;
    }

    void createTree();
};

void Node::createTree()
{
    int rootData;
    cout << "Enter data for root node";
    cin >> rootData;
}

int main()
{
    Node *root = nullptr;
    root->createTree();

    return 0;
}