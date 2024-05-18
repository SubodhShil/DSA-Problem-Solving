/**
 * @file            CN_Inorder_Traversal.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/inorder-traversal_3839605?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

void solver(vector<int> &res, TreeNode *root)
{
    if (!root)
        return;

    solver(res, root->left);
    res.push_back(root->data);
    solver(res, root->right);
}

vector<int> getInOrderTraversal(TreeNode *root)
{
    vector<int> result;
    solver(result, root);

    return result;
}