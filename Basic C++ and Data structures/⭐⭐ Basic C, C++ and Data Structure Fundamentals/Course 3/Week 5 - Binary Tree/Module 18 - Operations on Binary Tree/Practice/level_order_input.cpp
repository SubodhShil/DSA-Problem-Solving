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
    /// the value decides whether or not a node should place
    /// into the tree
    /// if the value is -1 then it shouldn't otherwise it should
    int val;
    cin >> val;
    BTnode *root = nullptr;

    if (val > 0)
        root = new BTnode(val);

    queue<BTnode *> treeNodes;
    if (root)
        treeNodes.push(root);

    while (!treeNodes.empty())
    {
        BTnode *currentRoot = treeNodes.front();
        treeNodes.pop();

        /// do the rest of the work: input the child nodes
        int valLeft, valRight;
        cin >> valLeft >> valRight;
        BTnode *left = nullptr, *right = nullptr;

        if (valLeft > 0)
            left = new BTnode(valLeft);
        if (valRight > 0)
            right = new BTnode(valRight);

        /// establish connection with the parent
        currentRoot->leftChild = left;
        currentRoot->rightChild = right;

        /// push child nodes into the queue if exists
        if (left)
            treeNodes.push(left);
        if (right)
            treeNodes.push(right);
    }

    return root;
}

void levelOrderTraverse(BTnode *root)
{
    if (!root)
    {
        cout << "Tree is empty\n";
        return;
    }

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
    levelOrderTraverse(root);

    return 0;
}
