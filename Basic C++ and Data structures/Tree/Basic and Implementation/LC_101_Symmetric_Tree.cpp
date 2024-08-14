/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/symmetric-tree/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl "\n"
int n, k, m, a, b, c;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
                                                       right(right) {}
};

class Solution
{
public:
    bool evaluate(TreeNode *left, TreeNode *right)
    {
        if (!left and !right)
            return true;

        if (!left or !right)
            return false;

        return ((left->val == right->val) &&
                evaluate(left->left, right->right) &&
                evaluate(left->right, right->left));
    }

    bool isSymmetric(TreeNode *root)
    {
        return !root or evaluate(root->left, root->right);
    }
};

int32_t main()
{
    return 0;
}