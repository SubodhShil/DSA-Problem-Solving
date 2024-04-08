/**
 * @file            CN_Preorder_Binary_Tree.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/preorder-binary-tree_5948
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

void preOrder(BinaryTreeNode<int> *root)
{
    if (!root)
        return;
    cout << root->data << " ";
    preOrder(root->left);
    preOrder(root->right);
}