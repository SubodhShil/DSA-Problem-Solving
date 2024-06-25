/*
                            ॐ JAY JAY SRI RAM ॐ

    * https://leetcode.com/problems/diameter-of-binary-tree/description/
    * Author: Subodh Chandra Shil

                        ॐ Attachment to Detachment ॐ
*/

/*

1. Longest path between any two nodes
2. Path doesn't need to pass via root node

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
    int height(TreeNode *root, int &diameter)
    {

        if (!root)
            return 0;

        int leftCnt = height(root->left, diameter);
        int rightCnt = height(root->right, diameter);

        diameter = max(diameter, leftCnt + rightCnt);

        return 1 + max(leftCnt, rightCnt);
    }

    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        height(root, diameter);

        return diameter;
    }
};

int32_t main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    return 0;
}