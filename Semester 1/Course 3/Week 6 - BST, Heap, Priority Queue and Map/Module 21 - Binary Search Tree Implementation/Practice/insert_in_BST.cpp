#include <bits/stdc++.h>
using namespace std;

class BTnode
{
public:
    int data;
    BTnode *leftChild, *rightChild;

    BTnode(int data)
    {
        this->data = data;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
};

BTnode *inputTree()
{
    /// the value decides whether or not the root node
    /// should place into the tree
    /// if the value is -1 then it shouldn't otherwise it should
    int value;
    cin >> value;
    BTnode *root = nullptr;

    if (value > 0)
        root = new BTnode(value);

    queue<BTnode *> treeNodes;
    if (root)
        treeNodes.push(root);

    while (!treeNodes.empty())
    {
        BTnode *current = treeNodes.front();

        /// input child nodes
        int leftVal, rightVal;
        cin >> leftVal >> rightVal;

        BTnode *left = nullptr, *right = nullptr;
        if (leftVal > 0)
            left = new BTnode(leftVal);
        if (rightVal > 0)
            right = new BTnode(rightVal);

        /// connect the childs to root
        current->leftChild = left;
        current->rightChild = right;

        /// remove the current front
        treeNodes.pop();

        /// push child nodes into the queue if exists
        if (left)
            treeNodes.push(left);
        if (right)
            treeNodes.push(right);
    }

    return root;
}

/// to insert a node in a BST, first we have to find a right place where the node can be placed
void insert(BTnode *&root, int x)
{
    if (!root)
    {
        root = new BTnode(x);
        return;
    }

    if (x < root->data)
    {
        if (!root->leftChild)
        {
            root->leftChild = new BTnode(x);
        }
        else
        {
            insert(root->leftChild, x);
        }
    }

    else
    {
        if (!root->rightChild)
        {
            root->rightChild = new BTnode(x);
        }
        else
        {
            insert(root->rightChild, x);
        }
    }
}

void levelOrderTraverse(BTnode *root)
{
    queue<BTnode *> nodesQueue;
    nodesQueue.push(root);

    while (!nodesQueue.empty())
    {
        BTnode *current = nodesQueue.front();
        nodesQueue.pop();

        /// do the task: print the value
        cout << current->data << " ";

        /// store the childs if exists
        /// order wise: left node should be insert first if you're traversing from left toward right and vice versa
        if (current->leftChild)
            nodesQueue.push(current->leftChild);

        if (current->rightChild)
            nodesQueue.push(current->rightChild);
    }
}

int main()
{
    BTnode *root = inputTree();
    int x;
    cin >> x;
    insert(root, x);
    levelOrderTraverse(root);

    return 0;
}