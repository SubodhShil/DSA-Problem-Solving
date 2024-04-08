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

void levelOrderTraverse(BTnode *root, int level)
{
    queue<pair<BTnode *, int>> storeNodes;
    storeNodes.push({root, 0});
    vector<int> levelValueStore;

    while (!storeNodes.empty())
    {
        pair<BTnode *, int> parent = storeNodes.front();
        BTnode *current = parent.first;
        int currentLevel = parent.second;
        storeNodes.pop();

        if (currentLevel == level)
            levelValueStore.push_back(current->data);

        if (currentLevel > level)
            break;

        if (current->leftChild)
            storeNodes.push({current->leftChild, currentLevel + 1});

        if (current->rightChild)
            storeNodes.push({current->rightChild, currentLevel + 1});
    }

    if (levelValueStore.empty())
        cout << "Invalid";
    else
    {
        for (auto i : levelValueStore)
            cout << i << " ";
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

    BTnode *root = inputTree();
    int level;
    cin >> level;
    levelOrderTraverse(root, level);

    return 0;
}