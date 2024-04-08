#include <bits/stdc++.h>
using namespace std;

class Tree
{
public:
    int data;
    Tree *leftChild, *rightChild;

    Tree(int data)
    {
        this->data = data;
        this->leftChild = nullptr;
        this->rightChild = nullptr;
    }
};

Tree *inputTree()
{
    /// declare the root
    int rootValue = 0;
    cin >> rootValue;

    Tree *root = nullptr;
    if (rootValue > 0)
        root = new Tree(rootValue);

    /// make the queue for tracking values
    queue<Tree *> treeNodes;
    if (root)
        treeNodes.push(root);

    /// traverse the queue and add more child nodes
    while (!treeNodes.empty())
    {
        Tree *currentParent = treeNodes.front();
        treeNodes.pop();

        /// adding child nodes
        int leftChildVal, rightChildVal;
        cin >> leftChildVal >> rightChildVal;
        Tree *leftNode = nullptr, *rightNode = nullptr;

        /// declare child nodes
        /// add childs to the parents (if valid)
        /// as well as store in the queue for adding their childs
        if (leftChildVal > 0)
        {
            leftNode = new Tree(leftChildVal);
            currentParent->leftChild = leftNode;
            treeNodes.push(leftNode);
        }
        if (rightChildVal > 0)
        {
            rightNode = new Tree(rightChildVal);
            currentParent->rightChild = rightNode;
            treeNodes.push(rightNode);
        }
    }

    return root;
}

/* Tree traversal */

/* DFS Tree traversal: In-order, Pre-order, Post-order */
void preOrderTraverse(Tree *node)
{
    if (!node)
        return;

    cout << node->data << " ";
    preOrderTraverse(node->leftChild);
    preOrderTraverse(node->rightChild);
}

void inOrderTraverse(Tree *node)
{
    if (!node)
        return;

    inOrderTraverse(node->leftChild);
    cout << node->data << " ";
    inOrderTraverse(node->rightChild);
}

void postOrderTraverse(Tree *node)
{
    if (!node)
        return;

    postOrderTraverse(node->leftChild);
    postOrderTraverse(node->rightChild);
    cout << node->data << " ";
}

/* BFS Tree traversal: Level order traversal */
void levelOrderTraverse(Tree *root)
{
    if (!root)
    {
        cout << "Tree is empty\n";
        return;
    }

    queue<Tree *> treeNodes;
    treeNodes.push(root);

    while (!treeNodes.empty())
    {
        Tree *currentNode = treeNodes.front();
        cout << currentNode->data << ' ';

        treeNodes.pop();

        if (currentNode->leftChild)
            treeNodes.push(currentNode->leftChild);
        if (currentNode->rightChild)
            treeNodes.push(currentNode->rightChild);
    }
}

int main()
{
    Tree *rootNode = inputTree();
    preOrderTraverse(rootNode);
    cout << endl;
    levelOrderTraverse(rootNode);

    return 0;
}

/*
Input:
5 3 6 10 12 0 0 0 0 0 0

Ouput:
pre-order: 5 3 10 12 6
level order: 5 3 6 10 12
 */