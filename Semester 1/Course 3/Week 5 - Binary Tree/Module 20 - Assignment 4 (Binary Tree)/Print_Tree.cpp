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

        int valLeft, valRight;
        cin >> valLeft >> valRight;
        BTnode *left = nullptr, *right = nullptr;

        if (valLeft > 0)
            left = new BTnode(valLeft);
        if (valRight > 0)
            right = new BTnode(valRight);

        currentRoot->leftChild = left;
        currentRoot->rightChild = right;

        if (left)
            treeNodes.push(left);
        if (right)
            treeNodes.push(right);
    }

    return root;
}

void reverseLevelOrderTraverse(BTnode *root)
{
    queue<BTnode *> nodesQueue;
    nodesQueue.push(root);
    stack<int> st;

    while (!nodesQueue.empty())
    {
        BTnode *current = nodesQueue.front();
        st.push(current->data);
        nodesQueue.pop();

        if (current->rightChild)
            nodesQueue.push(current->rightChild);

        if (current->leftChild)
            nodesQueue.push(current->leftChild);
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    BTnode *root = inputTree();
    reverseLevelOrderTraverse(root);

    return 0;
}