/**
 * @file        CN_Height_of_Binary_Tree.cpp
 * @author      Subodh Chandra Shil
 * @link:       https://www.codingninjas.com/studio/problems/tree-height_4609628?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode<T> *left;
    TreeNode<T> *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

int helper(TreeNode<int> *root)
{
    if (!root)
        return 0;

    return max(helper(root->left), helper(root->right)) + 1;
}

int heightOfBinaryTree(TreeNode<int> *root)
{
    return helper(root);
}

int main()
{

    return 0;
}