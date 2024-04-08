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

int maxHeight(BTnode *root, int &cntNodes)
{
    if (!root)
        return 0;

    if (root)
        ++cntNodes;

    int leftSide = maxHeight(root->leftChild, cntNodes);
    int rightSide = maxHeight(root->rightChild, cntNodes);

    return max(leftSide, rightSide) + 1;
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
    int sum = 0, height = 0, cntNodes = 0;
    BTnode *root = inputTree();
    height = maxHeight(root, cntNodes);

    int expectedNodeCnt = pow(2, height) - 1;

    if (expectedNodeCnt == cntNodes)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}