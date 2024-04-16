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

void findMaxMinLeaf(BTnode *root, int &maxLeaf, int &minLeaf)
{
    if (!root)
        return;

    queue<BTnode *> q;
    q.push(root);

    while (!q.empty())
    {
        BTnode *current = q.front();
        q.pop();

        if (!current->leftChild && !current->rightChild)
        {
            if (current->data > maxLeaf)
                maxLeaf = current->data;
            if (current->data < minLeaf)
                minLeaf = current->data;
        }

        if (current->leftChild)
            q.push(current->leftChild);
        if (current->rightChild)
            q.push(current->rightChild);
    }
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
    int maxLeaf = INT32_MIN, minLeaf = INT32_MAX;
    findMaxMinLeaf(root, maxLeaf, minLeaf);

    cout << maxLeaf << " " << minLeaf << endl;

    return 0;
}