/**
 * @file            CN_Is_Node_Present.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/code-find-a-node_5682?
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

/// T.C => O(N)
bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
    if (!root)
        return false;

    /// my work
    if (root->data == x)
        return true;

    /// let recursion do the rest of the work
    bool left = isNodePresent(root->left, x);
    bool right = isNodePresent(root->right, x);

    // return (left || right) ? 1 : 0;
    return (left || right);
}

int main()
{

    return 0;
}