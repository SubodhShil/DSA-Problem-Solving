/**
 * @file            CN_Postorder_Traversal.cpp
 * @author          Subodh Chandra Shil
 * @resources:      https://www.codingninjas.com/studio/problems/name_2035933?leftPanelTab=1
 */

#include <bits/stdc++.h>
using namespace std;

class TreeNode
{
public:
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }
};

void solve(TreeNode *root, vector<int> &ans)
{
    if (!root)
        return;

    solve(root->left, ans);
    solve(root->right, ans);
    ans.push_back(root->val);
}

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> res;
    solve(root, res);
    return res;
}
