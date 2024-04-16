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

int getSum(BTnode *root)
{
    if (!root)
        return 0;

    int leftSum = 0;
    int rightSum = 0;

    if (root->leftChild)
        leftSum = getSum(root->leftChild);
    if (root->rightChild)
        rightSum = getSum(root->rightChild);

    return root->data + leftSum + rightSum;
}

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

int main()
{
    int sum = 0;
    BTnode *root = inputTree();
    cout << getSum(root) << endl;

    return 0;
}