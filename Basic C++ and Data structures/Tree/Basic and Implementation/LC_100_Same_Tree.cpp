/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/same-tree/description/
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
    bool isSameTree(TreeNode *p, TreeNode *q)
    {

        if (!p and !q)
            return true;

        if (!p or !q or p->val != q->val)
            return false;

        return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}