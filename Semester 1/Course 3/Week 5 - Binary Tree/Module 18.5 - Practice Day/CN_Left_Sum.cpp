/**
 * @file            CN_Left_Sum.cpp
 * @author          Subodh Chandra Shil
 * @link:           https://www.codingninjas.com/studio/problems/left-sum_920380?leftPanelTab=1
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

    BinaryTreeNode(T val)
    {
        this->data = val;
        left = NULL;
        right = NULL;
    }
};

void helper(BinaryTreeNode<int> *root, long long &ans)
{
    if (!root)
        return;

    if (root->left)
        helper(root->left, ans += root->left->data);

    if (root->right)
        helper(root->right, ans);
}

long long leftSum(BinaryTreeNode<int> *root)
{
    long long ans = 0;
    helper(root, ans);

    return ans;
}

int main()
{

    return 0;
}