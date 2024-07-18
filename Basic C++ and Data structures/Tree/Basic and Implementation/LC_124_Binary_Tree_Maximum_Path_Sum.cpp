/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
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
    int maxPathSum(TreeNode *root)
    {
        int maxSum = INT_MIN;
        calculateMaxPathSum(root, maxSum);

        return maxSum;
    }

    int calculateMaxPathSum(TreeNode *root, int &maxSum)
    {
        if (!root)
            return 0;

        int leftSum = max(0, calculateMaxPathSum(root->left, maxSum));
        int rightSum = max(0, calculateMaxPathSum(root->right, maxSum));

        // maximum path sum calculation for every sub-tree
        maxSum = max(maxSum, root->val + leftSum + rightSum);

        return root->val + max(leftSum, rightSum);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}