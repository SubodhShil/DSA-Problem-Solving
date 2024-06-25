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
    int check(TreeNode *root)
    {
        if (!root)
            return 0;

        int leftCnt = check(root->left);
        if (leftCnt == -1)
            return -1;

        int rightCnt = check(root->right);
        if (rightCnt == -1)
            return -1;

        if (abs(leftCnt - rightCnt) > 1)
            return -1;

        return max(leftCnt, rightCnt) + 1;
    }

    bool isBalanced(TreeNode *root) { return check(root) != -1; }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}