/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/path-sum/
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
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution1
{
public:
    bool helper(TreeNode *root, int targetSum)
    {
        if (!root)
            return false;

        targetSum -= root->val;
        if (!targetSum && !root->left && !root->right)
            return true;

        return helper(root->left, targetSum) || helper(root->right, targetSum);
    }

    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return helper(root, targetSum);
    }
};

class Solution
{
public:
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        if (!root)
            return false;

        if (targetSum == root->val && !root->left && !root->right)
            return true;

        return hasPathSum(root->left, targetSum - root->val) || hasPathSum(root->right, targetSum - root->val);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}