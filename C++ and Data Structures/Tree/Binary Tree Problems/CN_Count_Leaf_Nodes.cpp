/**
 * @file        CN_Count_Leaf_Nodes.cpp
 * @author      Subodh Chandra Shil
 * @resources:  https://www.codingninjas.com/studio/problems/count-leaf-nodes_893055?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class BinaryTreeNode
{
public:
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

int traverseTree(BinaryTreeNode<int> *root, int cnt)
{
    if (!root)
        return 0;

    if (!root->left && !root->right)
        return 1;

    int left = traverseTree(root->left, cnt);
    int right = traverseTree(root->right, cnt);

    return left + right;
}

int noOfLeafNodes(BinaryTreeNode<int> *root)
{
    return traverseTree(root, 0);
}

int main()
{

    return 0;
}