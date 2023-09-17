#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int cntNodes(TreeNode *node, int maxVal = INT32_MIN, int ans = 0)
    {
        if (!node)
            return 0;

        if (node->left)
        {
            if (node->left->val >= node->val && node->left->val >= maxVal)
            {
                maxVal = node->left->val;
                cntNodes(node->left, maxVal, ans + 1);
            }
            else
            {
                maxVal = max(node->val, maxVal);
                cntNodes(node->left, maxVal, ans);
            }
        }

        if (node->right)
        {
            if (node->right->val >= node->val && node->right->val >= maxVal)
            {
                maxVal = node->right->val;
                cntNodes(node->right, maxVal, ans + 1);
            }
            else
            {
                maxVal = max(node->val, maxVal);
                cntNodes(node->right, maxVal, ans);
            }
        }

        return ans;
    }

    int goodNodes(TreeNode *root)
    {
        if (!root)
            return 0;

        return cntNodes(root) + 1;
    }
};

int main()
{

    return 0;
}