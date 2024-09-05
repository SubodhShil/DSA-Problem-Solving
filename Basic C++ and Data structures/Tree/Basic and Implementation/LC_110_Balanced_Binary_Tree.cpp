/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/balanced-binary-tree/description/
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

class Solution
{
public:
    int BBT(TreeNode *root)
    {
        if (!root)
            return 0;

        int leftSide = BBT(root->left);
        int rightSide = BBT(root->right);

        // check if BBT

        // if any side already calculated as -1 then return -1
        if (leftSide == -1 or rightSide == -1)
            return -1;
        // if difference is -1 then return -1
        if (abs(leftSide - rightSide) > 1)
            return -1;

        return max(leftSide, rightSide) + 1;
    }

    bool isBalanced(TreeNode *root)
    {
        return BBT(root) != -1;
    }
};
int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}