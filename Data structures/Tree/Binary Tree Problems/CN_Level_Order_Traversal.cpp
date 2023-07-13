/**
 * @file            CN_Level_Order_Traversal.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/level-order-traversal_796002?leftPanelTab=0
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T val;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void solver(BinaryTreeNode<int> *root, vector<int> &result)
{
    queue<BinaryTreeNode<int> *> nodeStore;
    nodeStore.push(root);

    while (!nodeStore.empty())
    {
        BinaryTreeNode<int> *current = nodeStore.front();

        /// do the work
        result.push_back(current->val);

        /// push the child nodes to the queue
        if (current->left)
            nodeStore.push(current->left);
        if (current->right)
            nodeStore.push(current->right);

        /// delete the current node from the queue
        nodeStore.pop();
    }
}

vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> result;

    if (!root)
        return result;

    solver(root, result);

    return result;
}

int main()
{

    return 0;
}